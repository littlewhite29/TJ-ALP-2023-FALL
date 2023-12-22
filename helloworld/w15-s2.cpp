/* 2051891 ���ζ� �Ź� */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�������ȫ��ֻ��������궨�岻�ܴ����ƣ�
   3�������������������
   ---------------------------------------------------------------------
*/

#define N	10

struct course {
	float value;		//ĳ�γ̵ĳɼ����ٷ��ƣ�
	float weight;	//ĳ�γ̵�ѧ�֣�Ȩ�أ�
	int   gpa;		//ĳ�γ̵ļ��㣨ͬ�ù���[0..60) - 0, [60,70) - 2, [70,80) - 3, [80-90) - 4,[90,100] - 5��
};

struct student {
	int   no;               //ѧ�ţ���Ȼ��int���������˴������ǣ�
	char  name[9];          //���������4������
	struct course score[3]; //��������ſεĳɼ���δʹ�ú궨�壬����ʵ��ʱ��ֱ��д3���ɣ�
	float overall_gpa;                    //��������������Ϊ��Ҫ���ӵĽṹ���Ա����һ��������Ҫ��ɾ������
};

class gpa_calc {
private:
	struct student stu[N];
	//�������������κ����ݳ�Ա 
public:
	void input();
	void output_base();
	void output_max();
	                     //��������������Ϊ��Ҫ���ӵĳ�Ա��������һ��������Ҫ��ɾ������
};

/* �������gpa_calc��ĳ�Ա����������ʵ�֣������Լ����ӵ�
   Ҫ�����������cin/cout */
void gpa_calc::input()
{
	/* �����������ͱ����⣬�����������������κ���ʽ�ı���
		 ������ã�����ɾ�������������ӻ��滻Ϊ������ʽ�ı���
		����for(int i=0; )��ʽ���±�������ͬ����ֹ */
	int i, j;

	/* ������ʵ�ֲ��� */
	for (i = 0; i < N; i++)
	{
		cout << "�������" <<setw(2)<< i + 1 << "��ѧ������Ϣ : ";
		cin >> stu[i].no >> stu[i].name;
		for (j = 0; j < 3; j++)
		{
			cin >> stu[i].score[j].value >> stu[i].score[j].weight;
			if (stu[i].score[j].value < 60)
			{
				stu[i].score[j].gpa = 0;
			}
			else if (stu[i].score[j].value < 70)
			{
				stu[i].score[j].gpa = 2;
			}
			else if (stu[i].score[j].value < 80)
			{
				stu[i].score[j].gpa = 3;
			}
			else if (stu[i].score[j].value < 90)
			{
				stu[i].score[j].gpa = 4;
			}
			else
			{
				stu[i].score[j].gpa = 5;
			}
		}
	}
}

void gpa_calc::output_base()
{
	/* ��������ָ������⣬�����������������κ���ʽ�ı���
		 ������ã�����ɾ�������������ӻ��滻Ϊ������ʽ�ı���
		����for(int i=0; )��ʽ���±�������ͬ����ֹ */
	struct student* ps;
	struct course* pc;

	/* ������ʵ�ֲ��֣��������κ���ʽ��[]���� */
	cout<<"\n10��ѧ���ĳɼ�\n";
	cout << "��� ѧ��    ����     ����1 Ȩ��1 ����2 Ȩ��2 ����3 Ȩ��3 ƽ������\n";
	cout << "==================================================================\n";
	for (ps = stu; ps - stu < N; ps++)
	{
		cout << setiosflags(ios::left);
		cout << setiosflags(ios::fixed);
		cout << setw(5) << (ps - stu) + 1 << setw(8) << (*ps).no << setw(9) << (*ps).name;
		(*ps).overall_gpa = 0;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			if ((*pc).weight - (int)(*pc).weight != 0)
			{
				cout << setprecision(1);
			}
			else
			{
				cout << setprecision(0);
			}
			cout << setw(6) << (*pc).gpa << setw(6) << (*pc).weight;
			(*pc).value = (*pc).gpa * (*pc).weight;
			(*ps).overall_gpa += (*pc).weight;
		}
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			(*pc).value /= (*ps).overall_gpa;
		}
		(*ps).overall_gpa = 0;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			(*ps).overall_gpa += (*pc).value;
		}
		cout << setprecision(3);
		cout << setw(6) << (*ps).overall_gpa<<endl;
	}
	cout << endl;
}
void gpa_calc::output_max()
{
	/* ��������������������͵ļ򵥱������������������� */
	float max = 0;
	struct student* ps;
	struct course* pc;
	for (ps = stu; ps - stu < N; ps++)
	{
		if ((*ps).overall_gpa > max)
		{
			max = (*ps).overall_gpa;
		}
	}
	cout<<"������ߵ�ѧ��Ϊ\n";
	cout << "��� ѧ��    ����     ����1 Ȩ��1 ����2 Ȩ��2 ����3 Ȩ��3 ƽ������\n";
	cout << "==================================================================\n";
	for (ps = stu; ps - stu < N; ps++)
	{
		if ((*ps).overall_gpa != max)
		{
			continue;
		}
		cout << setw(5) << (ps - stu) + 1 << setw(8) << (*ps).no << setw(9) << (*ps).name;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			if ((*pc).weight - (int)(*pc).weight != 0)
			{
				cout << setprecision(1);
			}
			else
			{
				cout << setprecision(0);
			}
			cout << setw(6) << (*pc).gpa << setw(6) << (*pc).weight;
		}
		cout << setprecision(3);
		cout << setw(6) << (*ps).overall_gpa << endl;
	}

}

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ�
	 ���������
	 �� �� ֵ��
	 ˵    ����main������׼��
   ***************************************************************************/
int main()
{
	gpa_calc g;

	g.input();		//����10��ѧ������Ϣ
	g.output_base();	//���10��ѧ���Ļ�����Ϣ
	g.output_max();	//�����ߣ������ж����

	return 0;
}

/*
�������ݣ����Ƶ�cmd����

2152482 ������ 76.5 4 82 5 52 2.5
2250411 �ֿ��� 63 4.5 49 1 87 6
2250821 ��ƽΰ 56 3 76 4 69 5
2251561 ������ 44.5 2 83.5 4 87 6
2252584 ŷ���� 91 4 43.5 1 66 3
2252753 ����� 79 6 85.5 3 62 2
2253554 �κ��� 86 3 63 3 77.5 4
2253711 ����� 49.5 3 86 6 93.5 3
2253968 ���ĳ� 81.5 2 64.5 3 87 4
2254174 ���� 73 3 62 2.5 85 5

*/