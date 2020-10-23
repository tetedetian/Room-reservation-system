/**********
不止一个机房，所以这个头文件是声明一个机房类，可供定义机房对象时使用
**********/
#pragma once 
#include <iostream>
using namespace std;

//机房类
class ComputerRoom
{
public:

	int m_ComId; //机房Id号

	int m_MaxNum; //机房最大容量
};