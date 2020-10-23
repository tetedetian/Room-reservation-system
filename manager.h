/**********
��������Ա��
**********/

#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"//����ԱҲҪ�����֤���϶����õ������
#include <string>
#include <fstream>//д��txt�ļ���Ҫ�õ���һ��ͷ�ļ�
#include "globalFile.h"
#include <vector>//vertor����ͷ�ļ�
#include "student.h"
#include "teacher.h"
#include <algorithm>//<algorithm>������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
#include "computerRoom.h"

//����Ա�����
class Manager :public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name ,string pwd);

	//�˵�����
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//����ظ� ����1:���ѧ��/ְ����  ����2:�������
	bool checkRepeat(int id , int type);

	//ѧ������
	vector<Student>vStu;

	//��ʦ����
	vector<Teacher>vTea;

	//������Ϣ����
	vector<ComputerRoom>vCom;
};