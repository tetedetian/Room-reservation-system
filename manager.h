/**********
声明管理员类
**********/

#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"//管理员也要身份认证，肯定得用到身份类
#include <string>
#include <fstream>//写入txt文件需要用到的一个头文件
#include "globalFile.h"
#include <vector>//vertor容器头文件
#include "student.h"
#include "teacher.h"
#include <algorithm>//<algorithm>是所有STL头文件中最大的一个，范围涉及到比较、 交换、查找、遍历操作、复制、修改等等
#include "computerRoom.h"

//管理员类设计
class Manager :public Identity
{
public:

	//默认构造
	Manager();

	//有参构造
	Manager(string name ,string pwd);

	//菜单界面
	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	//检测重复 参数1:检测学号/职工号  参数2:检测类型
	bool checkRepeat(int id , int type);

	//学生容器
	vector<Student>vStu;

	//教师容器
	vector<Teacher>vTea;

	//机房信息容器
	vector<ComputerRoom>vCom;
};