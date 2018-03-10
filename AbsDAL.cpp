#include "AbsDAL.h"

string AbsDAL::DB_IP = "127.0.0.1";
string AbsDAL::DB_Port = "5432";
string AbsDAL::DB_Name = "postgres";
string AbsDAL::DB_UserName = "postgres";
string AbsDAL::DB_UserPwd = "123456";
string AbsDAL::DB_ConnStr = "dbname=" + DB_Name
+ " user=" + DB_UserName
+ " password=" + DB_UserPwd
+ " host=" + DB_IP
+ " port=" + DB_Port;

AbsDAL::AbsDAL(const string * tablename){
	p_TABLE = tablename;
	cout << "--AbsDAL:" + *p_TABLE << endl;
	if (!InitServiceDB()){
		//throw runtime_error("PG DB Init Error.");
		isDBAble = false;
		cout << "pg connect failed!" << endl;
	}
	else{
		isDBAble = true;
	}
}

AbsDAL::~AbsDAL()
{
	if (p_pgdb != NULL){
		delete p_pgdb;
		p_pgdb = NULL;
	}
}

/**************************************************
* fun:InitServiceDB
* author: ZWH
* date: --::
*
***************************************************/
bool AbsDAL::InitServiceDB(){
	p_pgdb = NULL;
	p_pgdb = new PGDB(DB_ConnStr);
	if (p_pgdb->is_Working() == false) {
		delete p_pgdb;
		p_pgdb = NULL;
		cout << "PG DB Not Working ! Please Check !" << endl;
		return false;
	}
	cout << "-------PG DB is Connected Successfully." << endl;
	return true;
}

/**************************************************
* fun:Insert
* author: ZWH
* date: --::
* des:
*
***************************************************/
bool AbsDAL::Insert(){
	if (NULL == p_pgdb)
	{
		cout << "dbconnection is disabled..." << endl;
		return false;
	}
	int num = mapSQLTokens.size();
	if (0 == num)
	{
		cout << "no data to insert :mapSQLTokens empty!" << endl;
		return true;
	}
	//插入
	map<string, string>::iterator iter = mapSQLTokens.begin();
	string sql = "insert into " + *p_TABLE+" (";
	string valuestr = "values(";
	for (int i = 0; i < num - 1;i++)
	{
		sql += iter->first + ",";
		valuestr += iter->second + ",";
		iter++;
	}
	sql += iter->first + ") ";
	valuestr += iter->second + ");";
	sql += valuestr;
	cout << sql << endl;

	return p_pgdb->pg_exec_sql(sql);
}

/**************************************************
* fun:Update
* author: ZWH
* date: --::
* des:
*
***************************************************/
bool AbsDAL::Update(const string& wherestr){
	if (NULL == p_pgdb)
	{
		cout << "dbconnection is disabled..." << endl;
		return false;
	}
	int num = mapSQLTokens.size();
	if (0 == num)
	{
		cout << "no data to update:mapSQLTokens empty!" << endl;
		return true;
	}
	//更新
	map<string, string>::iterator iter = mapSQLTokens.begin();
	string sql = "update " + *p_TABLE + " set ";
	string valuestr = "values(";
	for (int i = 0; i < num - 1; i++)
	{
		sql += iter->first + "=" + iter->second + ",";
		iter++;
	}
	sql += iter->first + "=" + iter->second + " where " + wherestr;
	cout << sql << endl;
	return p_pgdb->pg_exec_sql(sql);
}
