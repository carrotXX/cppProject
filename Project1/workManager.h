#pragma once   // ��ֹͷ�ļ��ظ�����
#include <iostream>   
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"


class WorkManager
{
public:
	// ���캯��
	WorkManager();

	// չʾ�˵�
	void Show_Menu();

	// �˳�����
	void exitSystem();

	// ������¼ְ������
	unsigned int m_EmpNum;  
	
	// ����ְ������ָ��
	Worker** m_EmpArray;

	// ���ְ��
	void Add_Emp();

	// �����ļ�
	void save();

	// ��������
	~WorkManager();


};
