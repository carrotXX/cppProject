#include "workManager.h"
#include "employee.h"
#include "worker.h"
#include "manager.h"
#include "boss.h"

int main() {
	/*
	���¼����������������û���������ȷ��
	*/
	/*
	Worker* pworker = nullptr;
	Worker* pworker_manager = nullptr;
	pworker = new Employee(3001, "xiaofei", 17721759);
	pworker->showInfo();
	delete pworker;

	pworker = new Manager(2001, "changting", 5201413);
	pworker->showInfo();
	delete pworker;

	pworker = new Boss(1001, "MaXiang", 666666);
	pworker->showInfo();
	delete pworker;
	pworker = nullptr;
	*/

	unsigned int choice(0);

	
	while (true)
	{

		// ʵ����һ���������
		WorkManager wm;
		// ����չʾ�˵���Ա����
		wm.Show_Menu();

		std::cout << " ���������ѡ�� ";
		std::cin >> choice;
		std::cout << std::endl;
		switch (choice)
		{
		case 0:
			// �˳�ϵͳ
			wm.exitSystem();
			break;
		case 1:
			// ���ְ��
			wm.Add_Emp();
			break;
		case 2:
			// 
			break;
		case 3:
			// 
			break;
		case 4:
			// 
			break;
		case 5:
			// 
			break;
		case 6:
			// 
			break;
		case 7:
			// 
			break;
		case 8:
			// 
			break;
		default:
			system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}