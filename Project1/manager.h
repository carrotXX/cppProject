#pragma once
#include "worker.h"
#include <string>



class Manager :public Worker {
public:
	Manager(unsigned int id, std::string name, unsigned int did);

	virtual	void showInfo();

	// ��ȡ��λ��Ϣ
	virtual	std::string getDeptName();

};
