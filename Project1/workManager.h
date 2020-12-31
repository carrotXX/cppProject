#pragma once   // 防止头文件重复包含
#include <iostream>   
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"


class WorkManager
{
public:
	// 构造函数
	WorkManager();

	// 展示菜单
	void Show_Menu();

	// 退出程序
	void exitSystem();

	// 声明记录职工人数
	unsigned int m_EmpNum;  
	
	// 声明职工数组指针
	Worker** m_EmpArray;

	// 添加职工
	void Add_Emp();

	// 保存文件
	void save();

	// 析构函数
	~WorkManager();


};
