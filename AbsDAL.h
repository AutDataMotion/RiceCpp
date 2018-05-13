/**
* Date:	2016 - 09- 07   : :
* project:
* fileName:.AbsDAL.h
* author:	zhongweng.hao@qq.com
* Modification History:
* Date        Author         Version      Description
* -----------------------------------------------------------------
*  - -   : :        Zhongweng       1.0         1.0 Version
*/
#pragma once
#include <iostream>
#include <string>
#include <map>
#include <list> 
// #include "pgdb.h"
#include "mysql.h"

using namespace std;

class AbsDAL
{
public:
	AbsDAL(const string * tablename);
	virtual ~AbsDAL();
	virtual bool Insert();
	virtual bool Update(const string& wherestr);
	virtual bool ExeSQL(const string& sql);
	virtual bool Query(const string& sql, list< map<string, string> >& listData);
protected:
	bool isDBAble;
	map<string, string> mapSQLTokens;
private:
	const string* p_TABLE;
	static string DB_IP;
	static unsigned int DB_Port;
	static string DB_Name;
	static string DB_UserName;
	static string DB_UserPwd;
	static string DB_Charset;
	// PGDB* p_pgdb;
	MYSQL *connection;  

	/**************************************************
	* fun:InitServiceDB
	* author: ZWH
	* date: --::
	*
	***************************************************/
	bool InitServiceDB();
	
};
