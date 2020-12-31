#pragma once
#include <iostream>
#include <string>


class Worker {
public:
	// 显示个人信息
	virtual	void showInfo() = 0;

	// 获取岗位信息
	virtual	std::string getDeptName() = 0;

	// 职工编号
	unsigned int m_Id;
	// 职工姓名
	std::string m_Name;
	// 部门编号
	unsigned int m_DeptId;

};
