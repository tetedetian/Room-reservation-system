/**********

**********/

#pragma once
#include <iostream>
#include "globalFile.h"
#include <fstream>//��txt�ļ���д��Ҫ�õ�
#include <map>//map����ͷ�ļ�
#include <string>

using namespace std;

//
class OrderFile
{
public:

	//���캯��
	OrderFile();

	//����ԤԼ��¼
	void updateOrder();

	//��¼ԤԼ����
	int m_Size;

	//��¼����ԤԼ��Ϣ������(map����)  key��¼����   value �����¼��ֵ����Ϣ
	map<int, map<string, string>> m_orderData;

};
