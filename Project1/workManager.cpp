#include "workManager.h"
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"


WorkManager::WorkManager()
{
	// ��ʼ������
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
	cout << "***************  ��ӭʹ��ְ������ϵͳ ***********" << endl;
	cout << "***************    0. �˳��������    ***********" << endl;
	cout << "***************    1. ����ְ����Ϣ    ***********" << endl;
	cout << "***************    2. ��ʾְ����Ϣ    ***********" << endl;
	cout << "***************    3. ɾ��ְ����Ϣ    ***********" << endl;
	cout << "***************    4. �޸�ְ����Ϣ    ***********" << endl;
	cout << "***************    5. ����ְ����Ϣ    ***********" << endl;
	cout << "***************    6. ���ձ������    ***********" << endl;
	cout << "***************    7. ��������ĵ�    ***********" << endl;
}


void WorkManager::exitSystem()
{
	std::cout << "��ӭ�´�ʹ��Ա������ϵͳ��" << std::endl;
	system("pause");   // �ǵ�������������˳���û����ֱ���˳�
	exit(0);
}

// ���ְ��

void WorkManager::Add_Emp() {
	cout << "��������ӵ�ְ������: ";
	int addNum = 0;  //  �����û�����������
	cin >> addNum;
	if (addNum > 0) {
		//�����¿ռ��С
		int newSize = this->m_EmpNum + addNum;
		// �����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		// ��ԭʼ�ռ������ݷŵ��¿ռ���
		if (this->m_EmpArray != nullptr) {  // ���ԭʼ���鲻Ϊ��
			for (auto i = 0; i < this->m_EmpNum; ++i) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		
		// ����������
		for (auto i = 0; i < addNum; ++i) {
			unsigned id;
			std::string name;
			unsigned didSelect;

			cout << "�������" << i + 1 << "��Ա����ţ�";
			cin >> id;
			cout << endl;
			
			cout << "�������" << i + 1 << "��Ա��������";
			cin >> name;
			cout << endl;

			cout << "��˾ְ����λ�б�" << endl;
			cout << "1: ��ͨԱ��" << endl;
			cout << "2: ���ž���" << endl;
			cout << "3: ��˾�ϰ�" << endl;
			
			cout << "�������" << i + 1 << "��Ա�����ű�ţ�";
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
			//cout << "��" << i + 0 << "λԱ����ӳɹ���" << endl;
			//system("cls");
		}

		// �ͷ�ԭ��ָ��
		delete[]this->m_EmpArray;
		// �����ĵÿռ��ָ��
		m_EmpArray = newSpace;
		// ɾ����ʱָ��
		newSpace = nullptr;
		// �����µĸ���
		this->m_EmpNum = newSize;

		// ��ʾ��Ϣ
		cout << "�ܹ������" << addNum << "����ְ��" << endl;
		this->save();

	}
	else {
		cout << "������������" << endl;
	}
	// ��������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");	
}


void WorkManager::save() {
	ofstream ofs;  // д�ļ�
	ofs.open(FILENAME, ios::out);  // ������ķ�ʽ�򿪶�Ӧ·���µ��ļ�
	// ��ÿ������д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; ++i) {
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
