#pragma once
#include "worker.h"
#include <string>



class Manager :public Worker {
public:
	Manager(unsigned int id, std::string name, unsigned int did);

	virtual	void showInfo();

	// 获取岗位信息
	virtual	std::string getDeptName();

};
