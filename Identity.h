/**********
这个头文件定义了一个身份父类，声明了一些身份认证必须的成员变量和方法，可供管理员、教师、学生类继承。
**********/

#pragma once //防止头文件重复包含
#include <iostream>
using namespace std;

//身份抽象父类（基类）
class Identity
{
public:

	//操作菜单，用到了纯虚函数。（virtual是虚函数标志，“=0”则表示是纯虚函数）
	//如果父类中有纯虚函数，子类继承父类，就必须实现纯虚函数
	virtual void operMenu() = 0;

	//用户名
	string m_Name;
	//密码
	string m_Pwd;
};