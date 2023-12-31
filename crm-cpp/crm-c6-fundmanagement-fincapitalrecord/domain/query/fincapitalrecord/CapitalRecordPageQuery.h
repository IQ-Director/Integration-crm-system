#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: chaoneng
 @Date: 2023/10/21
 @FileName: CapitalRecordPageQuery
 @version: 1.2

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
#ifndef _CAPITAL_RECORD_PAGE_QUERY_
#define _CAPITAL_RECORD_PAGE_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/*
 * 资金注入抽取查询对象
 */
class CapitalRecordPageQuery : public PageQuery
{
	DTO_INIT(CapitalRecordPageQuery, PageQuery);
	// record_id 单号
	API_DTO_FIELD_DEFAULT(UInt64, record_id, ZH_WORDS_GETTER("fin_capital_record.field.record_id"));
	// type 支出类型
	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("fin_capital_record.field.type"));
	// create_user 创建人
	API_DTO_FIELD_DEFAULT(String, create_user, ZH_WORDS_GETTER("fin_capital_record.field.create_user"));
	// bank_id 银行账户id
	API_DTO_FIELD_DEFAULT(UInt64, bank_id, ZH_WORDS_GETTER("fin_capital_record.field.bank_id"));
	// bank_name 开户银行名称
	API_DTO_FIELD_DEFAULT(String, bank_name, ZH_WORDS_GETTER("fin_capital_record.field.bank_name"));
	// bank_card 银行卡号
	API_DTO_FIELD_DEFAULT(String, bank_card, ZH_WORDS_GETTER("fin_capital_record.field.bank_card"));
	// money 金额
	API_DTO_FIELD_DEFAULT(Int64, money, ZH_WORDS_GETTER("fin_capital_record.field.money"));
	// intro 备注
	API_DTO_FIELD_DEFAULT(String, intro, ZH_WORDS_GETTER("fin_capital_record.field.intro"));
	// create_time 创建时间
	API_DTO_FIELD_DEFAULT(Int64, create_time, ZH_WORDS_GETTER("fin_capital_record.field.create_time"));
	// happen_date 产生日期
	API_DTO_FIELD_DEFAULT(Int64, happen_date, ZH_WORDS_GETTER("fin_capital_record.field.happen_date"));
	// latest_happen_date
	API_DTO_FIELD_DEFAULT(Int64, latest_happen_date, ZH_WORDS_GETTER("fin_capital_record.field.latest_happen_date"))
	// latest_create_time
	API_DTO_FIELD_DEFAULT(Int64, latest_create_time, ZH_WORDS_GETTER("fin_capital_record.field.latest_create_time"))

public:

};

#include OATPP_CODEGEN_END(DTO)
#endif