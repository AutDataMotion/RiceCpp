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
#include "pgdb.h"
using namespace std;

class AbsDAL
{
public:
	AbsDAL(const string * tablename);
	virtual ~AbsDAL();
	virtual bool Insert();
	virtual bool Update(const string& wherestr);
protected:
	bool isDBAble;
	map<string, string> mapSQLTokens;
private:
	const string* p_TABLE;
	static string DB_IP;
	static string DB_Port;
	static string DB_Name;
	static string DB_UserName;
	static string DB_UserPwd;
	static string DB_ConnStr;
	PGDB* p_pgdb;
	/**************************************************
	* fun:InitServiceDB
	* author: ZWH
	* date: --::
	*
	***************************************************/
	bool InitServiceDB();
};
