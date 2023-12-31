/*
* 负责人：老菌
*/
#include "stdafx.h"
#include "GetContactListService.h"

ListContactPageDTO::Wrapper GetContactListService::getContactList(const ListContactQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = ListContactPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	GetContactListDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<ListContactDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (ListContactDO sub : result)
	{
		auto dto = ListContactDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, linkman_id, Linkman_Id, customer_name, Customer_Name, link_name, Name, \
			gender, Gender, postion, Postion, tel, Tel, mobile, Mobile, qicq, Qicq);
			pages->addData(dto);
	}
	return pages;
}
