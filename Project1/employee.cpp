#include "employee.h"


Employee::Employee(unsigned int id, std::string name, unsigned int did) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Employee::showInfo() {
	std::cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t���ű��: " << this->getDeptName()
		<< "\t��λְ��: ��ɾ����������� "
		<< std::endl;
	
}


std::string Employee::getDeptName() {
	return std::string("Ա��");
}