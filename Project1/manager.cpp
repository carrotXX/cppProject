#include "manager.h"
#include <iostream>
#include <string>


Manager::Manager(unsigned int id, std::string name, unsigned int did) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Manager::showInfo() {
	std::cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t���ű��: " << this->getDeptName()
		<< "\t��λְ��: ��������ϰ彻��������" << std::endl;

}

std::string Manager::getDeptName() {
	return std::string("����");
}