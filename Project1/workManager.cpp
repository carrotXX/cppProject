#include "workManager.h"
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"


WorkManager::WorkManager()
{
	// 初始化属性
	this->m_EmpNum = 0;
	this->m_EmpArray = nullptr;

}


WorkManager::~WorkManager()
{
	if (this->m_EmpArray != nullptr) {
		delete[]this->m_EmpArray;
		this->m_EmpArray = nullptr;
	}

}

void WorkManager::Show_Menu()
{
	cout << "************************************************" << endl;
	cout << "***************  欢迎使用职工管理系统 ***********" << endl;
	cout << "***************    0. 退出管理程序    ***********" << endl;
	cout << "***************    1. 增加职工信息    ***********" << endl;
	cout << "***************    2. 显示职工信息    ***********" << endl;
	cout << "***************    3. 删除职工信息    ***********" << endl;
	cout << "***************    4. 修改职工信息    ***********" << endl;
	cout << "***************    5. 查找职工信息    ***********" << endl;
	cout << "***************    6. 按照编号排序    ***********" << endl;
	cout << "***************    7. 清空所有文档    ***********" << endl;
}


void WorkManager::exitSystem()
{
	std::cout << "欢迎下次使用员工管理系统！" << std::endl;
	system("pause");   // 是的输入任意键再退出，没有则直接退出
	exit(0);
}

// 添加职工

void WorkManager::Add_Emp() {
	cout << "请输入添加的职工数量: ";
	int addNum = 0;  //  保存用户的输入数量
	cin >> addNum;
	if (addNum > 0) {
		//计算新空间大小
		int newSize = this->m_EmpNum + addNum;
		// 开辟新空间
		Worker** newSpace = new Worker * [newSize];

		// 将原始空间下内容放到新空间下
		if (this->m_EmpArray != nullptr) {  // 如果原始数组不为空
			for (auto i = 0; i < this->m_EmpNum; ++i) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		
		// 输入新数据
		for (auto i = 0; i < addNum; ++i) {
			unsigned id;
			std::string name;
			unsigned didSelect;

			cout << "请输入第" << i + 1 << "个员工编号：";
			cin >> id;
			cout << endl;
			
			cout << "请输入第" << i + 1 << "个员工姓名：";
			cin >> name;
			cout << endl;

			cout << "公司职工岗位列表：" << endl;
			cout << "1: 普通员工" << endl;
			cout << "2: 部门经理" << endl;
			cout << "3: 公司老板" << endl;
			
			cout << "请输入第" << i + 1 << "个员工部门编号：";
			cin >> didSelect;
			cout << endl;

			Worker* worker = nullptr;
			switch (didSelect)
			{
			case 1:
				worker = new Employee(id, name, didSelect);
				break;
			case 2:
				worker = new Manager(id, name, didSelect);
				break;
			case 3:
				worker = new Boss(id, name, didSelect);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
			//cout << "第" << i + 0 << "位员工添加成功！" << endl;
			//system("cls");
		}

		// 释放原有指针
		delete[]this->m_EmpArray;
		// 更改心得空间的指向
		m_EmpArray = newSpace;
		// 删除临时指针
		newSpace = nullptr;
		// 更新新的个数
		this->m_EmpNum = newSize;

		// 提示信息
		cout << "总共添加了" << addNum << "名新职工" << endl;
		this->save();

	}
	else {
		cout << "您的输入有误！" << endl;
	}
	// 按任意键后，清屏回到上级目录
	system("pause");
	system("cls");	
}


void WorkManager::save() {
	ofstream ofs;  // 写文件
	ofs.open(FILENAME, ios::out);  // 用输出的方式打开对应路径下的文件
	// 将每个人数写入到文件中
	for (int i = 0; i < this->m_EmpNum; ++i) {
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
