/**  
 * Date:	2016 - 09- 01  : :   
 * project:	   
 * fileName:	Example.cpp 
 * author:	zhongweng.hao@qq.com
 * ----------------------------------------------------------------- 
 *  - -   : :        Zhongweng       1.0         1.0 Version   
 */

#include <time.h>


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

	//ExmpleInsert();

	//EmpUpdate();
	/*return 0;
	TestStringCompare();
*/
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

	T5_dp_zw_r ZWR;
	ZWR.setKey_("zwr_key").setStation("TG02").setAircraft("TG02")
		.setProductmark("mark").setProductlevel("0B").setProductname("name")
		.setBitsperpixel(12).setVerticalresolution(12.0).setDatabegintime("2016-09-03 12:00:00")
		.setFilesize(1234).Insert();

	T1_2_lx_mwi mwiLx;
	string dateTime1;
	getDateTimeNow(dateTime1);
	cout << dateTime1 << endl;
	mwiLx.setKey_("1234").setStation("station").setProductlevel(2)
		.setDatacollectstart(dateTime1).setBandlist("bandlist text")
		.setBandreg(true).Insert();
}

void EmpUpdate(){
	T5_dp_zw_r daoZWR2;
	daoZWR2.setStation("TG01").Update("key_='zwr_key'");
}
