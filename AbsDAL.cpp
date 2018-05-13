#include "AbsDAL.h"
#include <iostream>
#include <string.h>
#include <map>
#include <string>
#include <fstream>
#include <vector>

string AbsDAL::DB_IP = "127.0.0.1";
unsigned int AbsDAL::DB_Port = 3306;
string AbsDAL::DB_Name = "thairice";
string AbsDAL::DB_UserName = "root";
string AbsDAL::DB_UserPwd = "zw@123";
string AbsDAL::DB_Charset = "UTF-8";

AbsDAL::AbsDAL(const string *tablename)
{
	p_TABLE = tablename;
	cout << "--AbsDAL:" + *p_TABLE << endl;
	connection = mysql_init(NULL); // 初始化数据库连接变量
	if (connection == NULL)
	{
		cout << "Error mysql_init:" << mysql_error(connection);
		exit(1);
	}

	if (!InitServiceDB())
	{
		cout << "database connect failed!" << endl;
		exit(1);
	}
	cout << "-------Data is Connected Successfully." << endl;
}

AbsDAL::~AbsDAL()
{
	if (connection != NULL) // 关闭数据库连接
	{
		mysql_close(connection);
	}
}

/**************************************************
* fun:InitServiceDB
* author: ZWH
* date: --::
*
***************************************************/
bool AbsDAL::InitServiceDB()
{
	// 函数mysql_real_connect建立一个数据库连接
	// 成功返回MYSQL*连接句柄，失败返回NULL
	connection = mysql_real_connect(
		connection, DB_IP.c_str(), DB_UserName.c_str(), DB_UserPwd.c_str(), DB_Name.c_str(), DB_Port, NULL, 0);
	if (connection == NULL)
	{
		cout << "Error mysql_real_connect:" << mysql_error(connection);
		return false;
	}
	if (mysql_set_character_set(connection, DB_Charset.c_str()) != 0)
	{
		cout << "Error mysql_set_character_set:" << mysql_error(connection);
		return false;
	}

	return true;
}

bool AbsDAL::ExeSQL(const string &sql)
{
	if (NULL == connection)
	{
		cout << "dbconnection is disabled..." << endl;
		return false;
	}
	cout << sql << endl;
	int res = mysql_query(connection, sql.c_str());
	// mysql_query()执行成功返回0，失败返回非0值
	return 0 == res ? true : false;
}
/**************************************************
* fun:Insert
* author: ZWH
* date: --::
* des:
*
***************************************************/
bool AbsDAL::Insert()
{
	if (NULL == connection)
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
	string sql = "insert into " + *p_TABLE + " (";
	string valuestr = "values(";
	for (int i = 0; i < num - 1; i++)
	{
		sql += iter->first + ",";
		valuestr += iter->second + ",";
		iter++;
	}
	sql += iter->first + ") ";
	valuestr += iter->second + ");";
	sql += valuestr;
	return ExeSQL(sql);
}

/**************************************************
* fun:Update
* author: ZWH
* date: --::
* des:
*
***************************************************/
bool AbsDAL::Update(const string &wherestr)
{
	if (NULL == connection)
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
	return ExeSQL(sql);
}
bool AbsDAL::Query(const string &sql, list< map<string, string> > &listData)
{
	if (NULL == &listData)
	{
		cout << "Query Error: NULL == &listData" << endl;
		return false;
	}

	int res;
	MYSQL_RES *res_ptr;   /*指向查询结果的指针*/
	MYSQL_FIELD *field;   /*字段结构指针*/
	MYSQL_ROW result_row; /*按行返回的查询信息*/

	int row, column; /*查询返回的行数和列数*/
	int i, j;

	// mysql_query()执行成功返回0，失败返回非0值。与PHP中不一样
	if (mysql_query(connection, sql.c_str()) != 0)
	{
		cout << "Query Error:" << mysql_error(connection);
		return false;
	}
	else
	{
		res_ptr = mysql_store_result(connection);

		if (res_ptr)
		{
			column = mysql_num_fields(res_ptr);
			row = mysql_num_rows(res_ptr) + 1;
			printf("查询到 %d 行,每行%d 列 \n", row , column);

			/*输出結果的字段名*/
			for (i = 0; field = mysql_fetch_field(res_ptr); i++)
				printf("%s\t", field->name);
			printf("\n");

			/*按行输出結果*/
			for (i = 1; i < row; i++)
			{
				result_row = mysql_fetch_row(res_ptr);
				for (j = 0; j < column; j++)
					printf("%s\t", result_row[j]);
				printf("\n");
			}
		}
		// 释放结果集的内存
		mysql_free_result(res_ptr);
	}
	return true;
}