#include "boss.h"


Boss::Boss(unsigned int id, std::string name, unsigned int did) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Boss::showInfo() {
	std::cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t���ű��: " << this->getDeptName()
		<< "\t��λְ��: ����˾��ͳ���ˣ��˳��ᢣ�" << std::endl;
}

std::string Boss::getDeptName() {
	return std::string("�ϰ�");
}