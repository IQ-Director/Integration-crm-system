/*
 Copyright Zero One Star. All rights reserved.

 @Author: juno
 @Date: 2023/10/29 13:27:39

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#include "stdafx.h"
#include "QueryLinkmanNameListController.h"
#include "../ApiDeclarativeServicesHelper.h"

LinkmanNameJsonVO::Wrapper QueryLinkmanNameListController::execQueryLinkmanNameList(const PullListQuery::Wrapper& query, const PayloadDTO& payload)
{
	// �����ͻ��˶���
	API_CLIENT_CREATE(ac, om, LinkmanNameListApiClient, "supplier-name-list-api");
	// ����ƾ֤
	std::string token = PayloadDTO::getTokenPrefix() + payload.getToken();
	// ���ز�ѯ���
	return ac->queryLinkmanNameList(token, URIUtil::urlEncode(query->keywords))->readBodyToDto<LinkmanNameJsonVO::Wrapper>(om);
}
