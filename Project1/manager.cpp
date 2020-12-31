#include "manager.h"
#include <iostream>
#include <string>


Manager::Manager(unsigned int id, std::string name, unsigned int did) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

void Manager::showInfo() {
	std::cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t部门编号: " << this->getDeptName()
		<< "\t岗位职责: 负责完成老板交代的任务！" << std::endl;

}

std::string Manager::getDeptName() {
	return std::string("经理");
}