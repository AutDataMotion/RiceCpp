/**  
 * Date:	 - -  : :   
 * project:	   
 * fileName:	R4message_send.h  
 * description:	
 * author:	zhongweng.hao@qq.com
 * Modification History:   
 * Date        Author         Version      Description   
 * ----------------------------------------------------------------- 
 *  - -   : :        Zhongweng       1.0         1.0 Version   
 */
#pragma once
#include <string>
#include "AbsDAL.h"
using namespace std;

class R4message_send :public AbsDAL {

public:
	R4message_send():AbsDAL(&TableName){}
	~R4message_send(){}
	
private:
	static const string TableName;
	/**
	 * 字段描述：系统消息编号 
	 * 字段类型：bigint  长度：null
	 */
	long id;
	/**
	 * 字段描述： 
	 * 字段类型：bigint  长度：null
	 */
	long message_id;
	/**
	 * 字段描述：接收人ID 
	 * 字段类型：bigint  长度：null
	 */
	long receive_userid;
	/**
	 * 字段描述：消息状态代码 
	 * 字段类型：enum  长度：2
	 */
	string status_;
public:
	
	
	R4message_send& setId(long aid){
		id = aid;
		mapSQLTokens["id"] = to_string(id);
		return *this;
	}
	long getId() {
		return id;
	}
	
	
	R4message_send& setMessage_id(long amessage_id){
		message_id = amessage_id;
		mapSQLTokens["message_id"] = to_string(message_id);
		return *this;
	}
	long getMessage_id() {
		return message_id;
	}
	
	
	R4message_send& setReceive_userid(long areceive_userid){
		receive_userid = areceive_userid;
		mapSQLTokens["receive_userid"] = to_string(receive_userid);
		return *this;
	}
	long getReceive_userid() {
		return receive_userid;
	}
	
	
	R4message_send& setStatus_(string astatus_){
		status_ = astatus_;
		
		mapSQLTokens["status_"] = "'"+status_+"'";
		return *this;
	}
	string getStatus_() {
		return status_;
	}
	
};
const string R4message_send::TableName = "r4message_send";
