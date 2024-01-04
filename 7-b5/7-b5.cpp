/* 2051891 ���ζ� �Ź� */

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "read_stulist.h"
#include <iomanip>
using namespace std;

#define MAX_FILENAME_LEN		512	//�����ļ�������󳤶�

/* stu_metge ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_merge {
private:
	int  stu_no;					//ѧ��
	char stu_name[MAX_NAME_LEN];  //����

	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */
	bool first_round;
	bool second_round;
	friend class stu_list;
public:
	//���಻�������κεĹ������ݳ�Ա����Ա����
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//��һ��ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_1;						//��һ��ѡ�ε�ѧ������

	student list_round_2[MAX_STU_NUM];	//�ڶ���ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_2;						//�ڶ���ѡ�ε�ѧ������

	stu_merge list_merge[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int list_merge_num;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����

	/* ���������private���ݳ�Ա�ͳ�Ա����
	   ע�⣬���������array / set / map / vector��STL���� */
	int rank[MAX_STU_NUM];
public:
	stu_list();										//���캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
	int read(const char* filename, const int round);	//���ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
	int print(const char* prompt = NULL);				//��ӡ���յ�ѡ������

	/* �������������public��Ա��������ʾ���ϲ���ȥ�ء�����ȣ�
	   �������幫�е����ݳ�Ա
	   �������ڳ�Ա������ʹ��array / set / map / vector��STL���� */
	bool find(student stu)
	{
		for (int i = 0; i < list_merge_num; i++)
		{
			if (strcmp(list_merge[i].stu_name, stu.name) == 0 && list_merge[i].stu_no == stu.no)
			{
				return true;
			}
		}
		return false;
	}
	void sort_merge_list()
	{
		for (int i = 0; i < MAX_STU_NUM; i++)
		{
			rank[i]=i;
		}
		for (int i = 1; i < list_merge_num; i++)
		{
			for (int j = 1; j < list_merge_num + 1 - i; j++)
			{
				if (list_merge[rank[j]].stu_no < list_merge[rank[j-1]].stu_no)
				{
					int temp = rank[j];
					rank[j] = rank[j-1];
					rank[j - 1] = temp;
					/*int temp = list_merge[j].stu_no;
					list_merge[j].stu_no = list_merge[j - 1].stu_no;
					list_merge[j - 1].stu_no = temp;
					bool temp2 = list_merge[j].first_round;
					list_merge[j].first_round= list_merge[j-1].first_round;
					list_merge[j-1].first_round = temp;
					char temp3[MAX_NAME_LEN] = { 0 };
					strcat(temp3, list_merge[j].stu_name);
					strcat(list_merge[j].stu_name, list_merge[j-1].stu_name);
					strcat(list_merge[j-1].stu_name, temp3);*/

				}
			}
		}
	}
	void generate_merge_list()
	{
		list_merge_num = 0;
		for (int i = 0; i < MAX_STU_NUM; i++)
		{
			for (int j = 0; j < MAX_NAME_LEN; j++)
			{
				list_merge[i].stu_name[j] = '\0';
			}
		}
		for (int i = 0; i < list_num_1; i++)
		{
			if (!find(list_round_1[i]))
			{
				strcat(list_merge[list_merge_num].stu_name, list_round_1[i].name);
				list_merge[list_merge_num].stu_no = list_round_1[i].no;
				list_merge[list_merge_num].first_round = true;
				list_merge[list_merge_num].second_round = false;
				for (int j = 0; j < list_num_2; j++)
				{
					if (strcmp(list_round_2[j].name, list_round_1[i].name) == 0 && list_round_1[i].no == list_round_2[j].no)
					{
						list_merge[list_merge_num].second_round = true;
						break;
					}
				}
				list_merge_num++;
			}
			
		}
		for (int i = 0; i < list_num_2; i++)
		{
			if (!find(list_round_2[i]))
			{
				strcat(list_merge[list_merge_num].stu_name, list_round_2[i].name);
				list_merge[list_merge_num].stu_no = list_round_2[i].no;
				list_merge[list_merge_num].first_round = false;
				list_merge[list_merge_num].second_round = true;
				list_merge_num++;
			}
		}
		sort_merge_list();
	}

};

/* --- ������Ը���stu_merge/stu_list������ĳ�Ա����������ʵ�� --- */


/***************************************************************************
  �������ƣ�
  ��    �ܣ����ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
  ���������
  �� �� ֵ��
  ˵    �������캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
***************************************************************************/
stu_list::stu_list()
{
	list_merge_num = 0;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ʾ��̬���ӿ��ʹ�ã��������е��þ�̬���ӿ��е�Ԥ�ú���
  ���������
  �� �� ֵ��
  ˵    ��������������Ҫ�޸�
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* ��ȡ��1/2�ֵ�ѡ����������ӡ */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ������ӡ���յ�ѡ������
***************************************************************************/
int stu_list::print(const char* prompt)
{
	cout << prompt<<endl;
	cout << setiosflags(ios::left);
	cout << setfill('=') << setw(60) << "" << endl;
	cout << setfill(' ') << setw(5) << "���" << setw(9) << "ѧ��" << setw(32) << "����" << setw(7) << "��һ��" << "�ڶ���" << endl;
	cout << setfill('=') << setw(60) << "" << endl;
	for (int i = 0; i < list_merge_num; i++)
	{
		cout << setfill(' ') << setw(5) << i + 1 << setw(9) << list_merge[rank[i]].stu_no << setw(32) << list_merge[rank[i]].stu_name << setw(7) << (list_merge[rank[i]].first_round ? 'Y' : '/') << (list_merge[rank[i]].second_round ? (list_merge[rank[i]].first_round ? "Y" : "��ѡ"):"�˿�") << endl;
	}
	cout << setfill('=') << setw(60) << "" << '\n';
	cout << setfill(' ');
	return 0;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	gets_s(file1); //cin���ܶ��пո���ļ�

	cout << "�������һ��ѡ�ε������ļ� : ";
	gets_s(file2);

	stu_list list;

	/* �������� */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* �������� */
	list.generate_merge_list();

	/* ��ӡ */
	list.print("����ѡ������");

	return 0;
}

