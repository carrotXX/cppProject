#pragma once
#include "worker.h"
#include <iostream>
#include <string>

class Employee : public Worker {
public:
	Employee(unsigned int id, std::string name, unsigned int did);  // ���캯��

	virtual void showInfo();   // virtual ��ɾ�ɲ���

	// ��ȡ��λ��Ϣ
	virtual std::string getDeptName();

};

