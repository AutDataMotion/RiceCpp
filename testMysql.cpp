#include <iostream>
#include "mysql.h"
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

    MYSQL mysql;
    mysql_init( &mysql );

    mysql_real_connect(
            &mysql,
            "127.0.0.1",   //要访问数据库的IP地址
            "root",         //用户名
            "zw@123",         //密码
            "thairice",         //要访问的数据库
            3306,           //该数据库的端口
            NULL,           //一般为NULL
            0               //一般为0
            );
    string sql = "insert into tkvalue(key_, value_, info, status_)values('key1','value1', 'info1', 1);";

    mysql_query( &mysql, sql.c_str() );

    mysql_close( &mysql );

    return 0;
}
