/**  
 * Date:	 - -  : :   
 * project:	   
 * fileName:	T1_1_part_mwi.h  
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

class T1_1_part_mwi :public AbsDAL {

public:
	T1_1_part_mwi():AbsDAL(&TableName){}
	~T1_1_part_mwi(){}
	
private:
	static const string TableName;
	/**
	 * 字段描述：自增id 
	 * 字段类型：integer  长度：null
	 */
	int id;
	/**
	 * 字段描述：唯一key 
	 * 字段类型：character varying  长度：128
	 */
	string key_;
	/**
	 * 字段描述：外键key 
	 * 字段类型：character varying  长度：128
	 */
	string fkey;
	/**
	 * 字段描述：分景模式 auto 
	 * 字段类型：character varying  长度：16
	 */
	string dividestyle;
	/**
	 * 字段描述：分景编号 
	 * 字段类型：character varying  长度：32
	 */
	string logicalfield;
	/**
	 * 字段描述：数据产品名称 原始数据名称后加-1,-2,-3等 
	 * 字段类型：character varying  长度：256
	 */
	string logicalfieldname;
	/**
	 * 字段描述：分景起始行 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldstarty;
	/**
	 * 字段描述：分景结束行 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldendly;
	/**
	 * 字段描述：分景起始列 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldstartx;
	/**
	 * 字段描述：分景结束列 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldendx;
	/**
	 * 字段描述：分景图像宽度 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldwidth;
	/**
	 * 字段描述：分景图像高度 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldheight;
	/**
	 * 字段描述：分景左上经度 
	 * 字段类型：real  长度：null
	 */
	float logicalfieldullongitude;
	/**
	 * 字段描述：分景左上纬度 
	 * 字段类型：real  长度：null
	 */
	float logicalfieldullatitude;
	/**
	 * 字段描述：分景右上经度 
	 * 字段类型：real  长度：null
	 */
	float logicalfielddrlongitude;
	/**
	 * 字段描述：分景右上纬度 
	 * 字段类型：real  长度：null
	 */
	float logicalfielddrlatitude;
	/**
	 * 字段描述：分景左下经度 
	 * 字段类型：real  长度：null
	 */
	float logicalfielddllongitude;
	/**
	 * 字段描述：分景左下纬度 
	 * 字段类型：real  长度：null
	 */
	float logicalfielddllatitude;
	/**
	 * 字段描述：分景右下经度 
	 * 字段类型：real  长度：null
	 */
	float logicalfieldlrlongitude;
	/**
	 * 字段描述：分景右下纬度 
	 * 字段类型：real  长度：null
	 */
	float logicalfieldlrlatitude;
	/**
	 * 字段描述：分景云覆盖率 
	 * 字段类型：real  长度：null
	 */
	float logicalfieldcloudcoverage;
	/**
	 * 字段描述：分景数据生产时间 
	 * 字段类型：timestamp without time zone  长度：null
	 */
	string logicalfieldproducttime;
	/**
	 * 字段描述：分景文件格式 Gtiff，dat等 
	 * 字段类型：character varying  长度：16
	 */
	string logicalfieldfiletype;
	/**
	 * 字段描述：分景数据格式 int16 float32等 
	 * 字段类型：character varying  长度：16
	 */
	string logicalfielddatatype;
	/**
	 * 字段描述：分景波段数 
	 * 字段类型：integer  长度：null
	 */
	int logicalfieldbandsnum;
	/**
	 * 字段描述：分景文件路径 
	 * 字段类型：character varying  长度：512
	 */
	string logicalfieldpath;
	/**
	 * 字段描述：缩略图文件名称 
	 * 字段类型：character varying  长度：128
	 */
	string quickviewname;
	/**
	 * 字段描述：缩略图文件位置 
	 * 字段类型：character varying  长度：512
	 */
	string quickviewpath;
	/**
	 * 字段描述：缩略图选择的波段_分割 
	 * 字段类型：character varying  长度：16
	 */
	string quickviewbands;
	/**
	 * 字段描述：缩略图文件格式 
	 * 字段类型：integer  长度：null
	 */
	int quickviewfiletype;
	/**
	 * 字段描述：缩略图采样率 
	 * 字段类型：integer  长度：null
	 */
	int quickviewresampleratio;
	/**
	 * 字段描述：拇指图文件名称 
	 * 字段类型：character varying  长度：128
	 */
	string thumbnailname;
	/**
	 * 字段描述：拇指图文件位置 
	 * 字段类型：character varying  长度：512
	 */
	string thumbnailpath;
	/**
	 * 字段描述：缩略图选择的波段_分割 
	 * 字段类型：character varying  长度：16
	 */
	string thumbnailbands;
	/**
	 * 字段描述：缩略图文件格式 
	 * 字段类型：integer  长度：null
	 */
	int thumbnailfiletype;
	/**
	 * 字段描述：拇指图采样率 
	 * 字段类型：integer  长度：null
	 */
	int thumbnailsampleration;
	/**
	 * 字段描述：相邻重叠区像素，最后一景和倒数第二景根据实际情况计算 
	 * 字段类型：real  长度：null
	 */
	float overlapratio;
	/**
	 * 字段描述：版本 
	 * 字段类型：character varying  长度：32
	 */
	string version_;
	/**
	 * 字段描述：csv文件名 
	 * 字段类型：character varying  长度：null
	 */
	string csvfilename;
	/**
	 * 字段描述：数据文件大小 字节 
	 * 字段类型：bigint  长度：null
	 */
	long filesize;
public:
	
	
	T1_1_part_mwi& setId(int aid){
		id = aid;
		mapSQLTokens["id"] = to_string(id);
		return *this;
	}
	int getId() {
		return id;
	}
	
	
	T1_1_part_mwi& setKey_(string akey_){
		key_ = akey_;
		
		mapSQLTokens["key_"] = "'"+key_+"'";
		return *this;
	}
	string getKey_() {
		return key_;
	}
	
	
	T1_1_part_mwi& setFkey(string afkey){
		fkey = afkey;
		
		mapSQLTokens["fkey"] = "'"+fkey+"'";
		return *this;
	}
	string getFkey() {
		return fkey;
	}
	
	
	T1_1_part_mwi& setDividestyle(string adividestyle){
		dividestyle = adividestyle;
		
		mapSQLTokens["dividestyle"] = "'"+dividestyle+"'";
		return *this;
	}
	string getDividestyle() {
		return dividestyle;
	}
	
	
	T1_1_part_mwi& setLogicalfield(string alogicalfield){
		logicalfield = alogicalfield;
		
		mapSQLTokens["logicalfield"] = "'"+logicalfield+"'";
		return *this;
	}
	string getLogicalfield() {
		return logicalfield;
	}
	
	
	T1_1_part_mwi& setLogicalfieldname(string alogicalfieldname){
		logicalfieldname = alogicalfieldname;
		
		mapSQLTokens["logicalfieldname"] = "'"+logicalfieldname+"'";
		return *this;
	}
	string getLogicalfieldname() {
		return logicalfieldname;
	}
	
	
	T1_1_part_mwi& setLogicalfieldstarty(int alogicalfieldstarty){
		logicalfieldstarty = alogicalfieldstarty;
		mapSQLTokens["logicalfieldstarty"] = to_string(logicalfieldstarty);
		return *this;
	}
	int getLogicalfieldstarty() {
		return logicalfieldstarty;
	}
	
	
	T1_1_part_mwi& setLogicalfieldendly(int alogicalfieldendly){
		logicalfieldendly = alogicalfieldendly;
		mapSQLTokens["logicalfieldendly"] = to_string(logicalfieldendly);
		return *this;
	}
	int getLogicalfieldendly() {
		return logicalfieldendly;
	}
	
	
	T1_1_part_mwi& setLogicalfieldstartx(int alogicalfieldstartx){
		logicalfieldstartx = alogicalfieldstartx;
		mapSQLTokens["logicalfieldstartx"] = to_string(logicalfieldstartx);
		return *this;
	}
	int getLogicalfieldstartx() {
		return logicalfieldstartx;
	}
	
	
	T1_1_part_mwi& setLogicalfieldendx(int alogicalfieldendx){
		logicalfieldendx = alogicalfieldendx;
		mapSQLTokens["logicalfieldendx"] = to_string(logicalfieldendx);
		return *this;
	}
	int getLogicalfieldendx() {
		return logicalfieldendx;
	}
	
	
	T1_1_part_mwi& setLogicalfieldwidth(int alogicalfieldwidth){
		logicalfieldwidth = alogicalfieldwidth;
		mapSQLTokens["logicalfieldwidth"] = to_string(logicalfieldwidth);
		return *this;
	}
	int getLogicalfieldwidth() {
		return logicalfieldwidth;
	}
	
	
	T1_1_part_mwi& setLogicalfieldheight(int alogicalfieldheight){
		logicalfieldheight = alogicalfieldheight;
		mapSQLTokens["logicalfieldheight"] = to_string(logicalfieldheight);
		return *this;
	}
	int getLogicalfieldheight() {
		return logicalfieldheight;
	}
	
	
	T1_1_part_mwi& setLogicalfieldullongitude(float alogicalfieldullongitude){
		logicalfieldullongitude = alogicalfieldullongitude;
		mapSQLTokens["logicalfieldullongitude"] = to_string(logicalfieldullongitude);
		return *this;
	}
	float getLogicalfieldullongitude() {
		return logicalfieldullongitude;
	}
	
	
	T1_1_part_mwi& setLogicalfieldullatitude(float alogicalfieldullatitude){
		logicalfieldullatitude = alogicalfieldullatitude;
		mapSQLTokens["logicalfieldullatitude"] = to_string(logicalfieldullatitude);
		return *this;
	}
	float getLogicalfieldullatitude() {
		return logicalfieldullatitude;
	}
	
	
	T1_1_part_mwi& setLogicalfielddrlongitude(float alogicalfielddrlongitude){
		logicalfielddrlongitude = alogicalfielddrlongitude;
		mapSQLTokens["logicalfielddrlongitude"] = to_string(logicalfielddrlongitude);
		return *this;
	}
	float getLogicalfielddrlongitude() {
		return logicalfielddrlongitude;
	}
	
	
	T1_1_part_mwi& setLogicalfielddrlatitude(float alogicalfielddrlatitude){
		logicalfielddrlatitude = alogicalfielddrlatitude;
		mapSQLTokens["logicalfielddrlatitude"] = to_string(logicalfielddrlatitude);
		return *this;
	}
	float getLogicalfielddrlatitude() {
		return logicalfielddrlatitude;
	}
	
	
	T1_1_part_mwi& setLogicalfielddllongitude(float alogicalfielddllongitude){
		logicalfielddllongitude = alogicalfielddllongitude;
		mapSQLTokens["logicalfielddllongitude"] = to_string(logicalfielddllongitude);
		return *this;
	}
	float getLogicalfielddllongitude() {
		return logicalfielddllongitude;
	}
	
	
	T1_1_part_mwi& setLogicalfielddllatitude(float alogicalfielddllatitude){
		logicalfielddllatitude = alogicalfielddllatitude;
		mapSQLTokens["logicalfielddllatitude"] = to_string(logicalfielddllatitude);
		return *this;
	}
	float getLogicalfielddllatitude() {
		return logicalfielddllatitude;
	}
	
	
	T1_1_part_mwi& setLogicalfieldlrlongitude(float alogicalfieldlrlongitude){
		logicalfieldlrlongitude = alogicalfieldlrlongitude;
		mapSQLTokens["logicalfieldlrlongitude"] = to_string(logicalfieldlrlongitude);
		return *this;
	}
	float getLogicalfieldlrlongitude() {
		return logicalfieldlrlongitude;
	}
	
	
	T1_1_part_mwi& setLogicalfieldlrlatitude(float alogicalfieldlrlatitude){
		logicalfieldlrlatitude = alogicalfieldlrlatitude;
		mapSQLTokens["logicalfieldlrlatitude"] = to_string(logicalfieldlrlatitude);
		return *this;
	}
	float getLogicalfieldlrlatitude() {
		return logicalfieldlrlatitude;
	}
	
	
	T1_1_part_mwi& setLogicalfieldcloudcoverage(float alogicalfieldcloudcoverage){
		logicalfieldcloudcoverage = alogicalfieldcloudcoverage;
		mapSQLTokens["logicalfieldcloudcoverage"] = to_string(logicalfieldcloudcoverage);
		return *this;
	}
	float getLogicalfieldcloudcoverage() {
		return logicalfieldcloudcoverage;
	}
	
	
	T1_1_part_mwi& setLogicalfieldproducttime(string alogicalfieldproducttime){
		logicalfieldproducttime = alogicalfieldproducttime;
		
		mapSQLTokens["logicalfieldproducttime"] = "'"+logicalfieldproducttime+"'";
		return *this;
	}
	string getLogicalfieldproducttime() {
		return logicalfieldproducttime;
	}
	
	
	T1_1_part_mwi& setLogicalfieldfiletype(string alogicalfieldfiletype){
		logicalfieldfiletype = alogicalfieldfiletype;
		
		mapSQLTokens["logicalfieldfiletype"] = "'"+logicalfieldfiletype+"'";
		return *this;
	}
	string getLogicalfieldfiletype() {
		return logicalfieldfiletype;
	}
	
	
	T1_1_part_mwi& setLogicalfielddatatype(string alogicalfielddatatype){
		logicalfielddatatype = alogicalfielddatatype;
		
		mapSQLTokens["logicalfielddatatype"] = "'"+logicalfielddatatype+"'";
		return *this;
	}
	string getLogicalfielddatatype() {
		return logicalfielddatatype;
	}
	
	
	T1_1_part_mwi& setLogicalfieldbandsnum(int alogicalfieldbandsnum){
		logicalfieldbandsnum = alogicalfieldbandsnum;
		mapSQLTokens["logicalfieldbandsnum"] = to_string(logicalfieldbandsnum);
		return *this;
	}
	int getLogicalfieldbandsnum() {
		return logicalfieldbandsnum;
	}
	
	
	T1_1_part_mwi& setLogicalfieldpath(string alogicalfieldpath){
		logicalfieldpath = alogicalfieldpath;
		
		mapSQLTokens["logicalfieldpath"] = "'"+logicalfieldpath+"'";
		return *this;
	}
	string getLogicalfieldpath() {
		return logicalfieldpath;
	}
	
	
	T1_1_part_mwi& setQuickviewname(string aquickviewname){
		quickviewname = aquickviewname;
		
		mapSQLTokens["quickviewname"] = "'"+quickviewname+"'";
		return *this;
	}
	string getQuickviewname() {
		return quickviewname;
	}
	
	
	T1_1_part_mwi& setQuickviewpath(string aquickviewpath){
		quickviewpath = aquickviewpath;
		
		mapSQLTokens["quickviewpath"] = "'"+quickviewpath+"'";
		return *this;
	}
	string getQuickviewpath() {
		return quickviewpath;
	}
	
	
	T1_1_part_mwi& setQuickviewbands(string aquickviewbands){
		quickviewbands = aquickviewbands;
		
		mapSQLTokens["quickviewbands"] = "'"+quickviewbands+"'";
		return *this;
	}
	string getQuickviewbands() {
		return quickviewbands;
	}
	
	
	T1_1_part_mwi& setQuickviewfiletype(int aquickviewfiletype){
		quickviewfiletype = aquickviewfiletype;
		mapSQLTokens["quickviewfiletype"] = to_string(quickviewfiletype);
		return *this;
	}
	int getQuickviewfiletype() {
		return quickviewfiletype;
	}
	
	
	T1_1_part_mwi& setQuickviewresampleratio(int aquickviewresampleratio){
		quickviewresampleratio = aquickviewresampleratio;
		mapSQLTokens["quickviewresampleratio"] = to_string(quickviewresampleratio);
		return *this;
	}
	int getQuickviewresampleratio() {
		return quickviewresampleratio;
	}
	
	
	T1_1_part_mwi& setThumbnailname(string athumbnailname){
		thumbnailname = athumbnailname;
		
		mapSQLTokens["thumbnailname"] = "'"+thumbnailname+"'";
		return *this;
	}
	string getThumbnailname() {
		return thumbnailname;
	}
	
	
	T1_1_part_mwi& setThumbnailpath(string athumbnailpath){
		thumbnailpath = athumbnailpath;
		
		mapSQLTokens["thumbnailpath"] = "'"+thumbnailpath+"'";
		return *this;
	}
	string getThumbnailpath() {
		return thumbnailpath;
	}
	
	
	T1_1_part_mwi& setThumbnailbands(string athumbnailbands){
		thumbnailbands = athumbnailbands;
		
		mapSQLTokens["thumbnailbands"] = "'"+thumbnailbands+"'";
		return *this;
	}
	string getThumbnailbands() {
		return thumbnailbands;
	}
	
	
	T1_1_part_mwi& setThumbnailfiletype(int athumbnailfiletype){
		thumbnailfiletype = athumbnailfiletype;
		mapSQLTokens["thumbnailfiletype"] = to_string(thumbnailfiletype);
		return *this;
	}
	int getThumbnailfiletype() {
		return thumbnailfiletype;
	}
	
	
	T1_1_part_mwi& setThumbnailsampleration(int athumbnailsampleration){
		thumbnailsampleration = athumbnailsampleration;
		mapSQLTokens["thumbnailsampleration"] = to_string(thumbnailsampleration);
		return *this;
	}
	int getThumbnailsampleration() {
		return thumbnailsampleration;
	}
	
	
	T1_1_part_mwi& setOverlapratio(float aoverlapratio){
		overlapratio = aoverlapratio;
		mapSQLTokens["overlapratio"] = to_string(overlapratio);
		return *this;
	}
	float getOverlapratio() {
		return overlapratio;
	}
	
	
	T1_1_part_mwi& setVersion_(string aversion_){
		version_ = aversion_;
		
		mapSQLTokens["version_"] = "'"+version_+"'";
		return *this;
	}
	string getVersion_() {
		return version_;
	}
	
	
	T1_1_part_mwi& setCsvfilename(string acsvfilename){
		csvfilename = acsvfilename;
		
		mapSQLTokens["csvfilename"] = "'"+csvfilename+"'";
		return *this;
	}
	string getCsvfilename() {
		return csvfilename;
	}
	
	
	T1_1_part_mwi& setFilesize(long afilesize){
		filesize = afilesize;
		mapSQLTokens["filesize"] = to_string(filesize);
		return *this;
	}
	long getFilesize() {
		return filesize;
	}
	
};
const string T1_1_part_mwi::TableName = "tg2datastore.t1_1_part_mwi";
