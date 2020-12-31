#pragma once
#include "worker.h"
#include <iostream>
#include <string>

class Employee : public Worker {
public:
	Employee(unsigned int id, std::string name, unsigned int did);  // 构造函数

	virtual void showInfo();   // virtual 可删可不善

	// 获取岗位信息
	virtual std::string getDeptName();

};

