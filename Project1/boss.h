#pragma once

#include "worker.h"

class Boss : public Worker {
public:
	Boss(unsigned int id, std::string name, unsigned int did);
	virtual void showInfo();
	virtual std::string getDeptName();
};
