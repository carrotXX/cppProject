#include "boss.h"


Boss::Boss(unsigned int id, std::string name, unsigned int did) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Boss::showInfo() {
	std::cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t部门编号: " << this->getDeptName()
		<< "\t岗位职责: 管理公司，统筹兼顾，运筹帷幄！" << std::endl;
}

std::string Boss::getDeptName() {
	return std::string("老板");
}