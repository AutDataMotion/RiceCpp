/**  
 * Date:	2016 - 09- 01  : :   
 * project:	   
 * fileName:	Example.cpp 
 * author:	zhongweng.hao@qq.com
 * ----------------------------------------------------------------- 
 *  - -   : :        Zhongweng       1.0         1.0 Version   
 */
#include <iostream>
#include <string>
#include <time.h>

#include "Tkvalue.h"

using namespace std;

void TestStringCompare();
void ExmpleInsert();
void EmpUpdate();

void getDateTimeNow(string& strDate){
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&t));
	strDate = tmp;
}
int main(int argc, char* argv[]){

	ExmpleInsert();

	//EmpUpdate();

	cout << endl<<"***********input any one of keys then press 'Enter' to exit" << endl;
	char s;
	cin >> s;
	return 0;
}
void TestStringCompare(){
	string str1 = "12345";
	string str2 = "234";
	string str3 = "34567";
	string str4 = "234";

	cout << str2.compare(str1) << " " << str2.compare(str3) <<"  "<<str2.compare(str4)<< endl;
}
void ExmpleInsert(){

	Tkvalue kvalue;
	string dateTime1;
	getDateTimeNow(dateTime1);
	kvalue.setKey_("testkey")
		.setValue_("tvalue")
		.setInfo("tinfo")
		.setStatus_(1)
		.setAdd_time(dateTime1).Insert();
}

void EmpUpdate(){
	Tkvalue kvalue;
	kvalue.setInfo("tinfoupdate").Update("id=1");
}
