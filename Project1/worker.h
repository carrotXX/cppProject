#pragma once
#include <iostream>
#include <string>


class Worker {
public:
	// ��ʾ������Ϣ
	virtual	void showInfo() = 0;

	// ��ȡ��λ��Ϣ
	virtual	std::string getDeptName() = 0;

	// ְ�����
	unsigned int m_Id;
	// ְ������
	std::string m_Name;
	// ���ű��
	unsigned int m_DeptId;

};
