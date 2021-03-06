/**  
 * Date:	 - -  : :   
 * project:	   
 * fileName:	T10pdt_report.h  
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

class T10pdt_report :public AbsDAL {

public:
	T10pdt_report():AbsDAL(&TableName){}
	~T10pdt_report(){}
	
private:
	static const string TableName;
	/**
	 * 字段描述：产品报表编号 
	 * 字段类型：bigint  长度：null
	 */
	long id;
	/**
	 * 字段描述：用户ID 
	 * 字段类型：bigint  长度：null
	 */
	long userid;
	/**
	 * 字段描述：报告创建时间 
	 * 字段类型：datetime  长度：null
	 */
	string add_time;
	/**
	 * 字段描述：采集日期 
	 * 字段类型：datetime  长度：null
	 */
	string collect_time;
	/**
	 * 字段描述：查询产品开始日期 
	 * 字段类型：datetime  长度：null
	 */
	string start_time;
	/**
	 * 字段描述：查询产品结束日期 
	 * 字段类型：datetime  长度：null
	 */
	string end_time;
	/**
	 * 字段描述：查询行政区域代码 
	 * 字段类型：int  长度：null
	 */
	int zone_code;
	/**
	 * 字段描述：查询作物种类代码 
	 * 字段类型：enum  长度：2
	 */
	string crop_type;
	/**
	 * 字段描述：产品类型代码 
	 * 字段类型：enum  长度：2
	 */
	string pdt_type;
	/**
	 * 字段描述：报告格式代码 
	 * 字段类型：enum  长度：2
	 */
	string suffix;
	/**
	 * 字段描述：下载路径 
	 * 字段类型：varchar  长度：256
	 */
	string download_path;
public:
	
	
	T10pdt_report& setId(long aid){
		id = aid;
		mapSQLTokens["id"] = to_string(id);
		return *this;
	}
	long getId() {
		return id;
	}
	
	
	T10pdt_report& setUserid(long auserid){
		userid = auserid;
		mapSQLTokens["userid"] = to_string(userid);
		return *this;
	}
	long getUserid() {
		return userid;
	}
	
	
	T10pdt_report& setAdd_time(string aadd_time){
		add_time = aadd_time;
		
		mapSQLTokens["add_time"] = "'"+add_time+"'";
		return *this;
	}
	string getAdd_time() {
		return add_time;
	}
	
	
	T10pdt_report& setCollect_time(string acollect_time){
		collect_time = acollect_time;
		
		mapSQLTokens["collect_time"] = "'"+collect_time+"'";
		return *this;
	}
	string getCollect_time() {
		return collect_time;
	}
	
	
	T10pdt_report& setStart_time(string astart_time){
		start_time = astart_time;
		
		mapSQLTokens["start_time"] = "'"+start_time+"'";
		return *this;
	}
	string getStart_time() {
		return start_time;
	}
	
	
	T10pdt_report& setEnd_time(string aend_time){
		end_time = aend_time;
		
		mapSQLTokens["end_time"] = "'"+end_time+"'";
		return *this;
	}
	string getEnd_time() {
		return end_time;
	}
	
	
	T10pdt_report& setZone_code(int azone_code){
		zone_code = azone_code;
		mapSQLTokens["zone_code"] = to_string(zone_code);
		return *this;
	}
	int getZone_code() {
		return zone_code;
	}
	
	
	T10pdt_report& setCrop_type(string acrop_type){
		crop_type = acrop_type;
		
		mapSQLTokens["crop_type"] = "'"+crop_type+"'";
		return *this;
	}
	string getCrop_type() {
		return crop_type;
	}
	
	
	T10pdt_report& setPdt_type(string apdt_type){
		pdt_type = apdt_type;
		
		mapSQLTokens["pdt_type"] = "'"+pdt_type+"'";
		return *this;
	}
	string getPdt_type() {
		return pdt_type;
	}
	
	
	T10pdt_report& setSuffix(string asuffix){
		suffix = asuffix;
		
		mapSQLTokens["suffix"] = "'"+suffix+"'";
		return *this;
	}
	string getSuffix() {
		return suffix;
	}
	
	
	T10pdt_report& setDownload_path(string adownload_path){
		download_path = adownload_path;
		
		mapSQLTokens["download_path"] = "'"+download_path+"'";
		return *this;
	}
	string getDownload_path() {
		return download_path;
	}
	
};
const string T10pdt_report::TableName = "t10pdt_report";
