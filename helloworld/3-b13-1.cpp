///* �Ź� 2051891 ���ζ� */
//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int y, m, d;
//	int status;//����״̬��ȡ0������ȡ1������
//	int num = 0;//�·�����
//	int leap = 0;//�Ƿ����꣬��ȡ1����ȡ0
//	while (true)
//	{
//		status = 0;
//		cout << "���������(2000-2030)���·�(1-12) : ";
//		cin >> y >> m;
//		leap = ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 1 : 0);
//		if (y < 2000 || y>2030)
//		{
//			status = 1;
//		}
//		if (m <= 0 || m > 12)
//		{
//			status = 1;
//		}
//		//�ж�������ȷ��
//		if (status == 1 || cin.good() == 0)
//		{
//			cout << "����Ƿ�������������\n";
//			int temp;
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;//�����
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (true)
//	{
//		status = 0;
//		cout << "������" << y << "��" << m << "��1�յ�����(0-6��ʾ������-������) : " << endl;
//		cin >> d;
//		if (d < 0 || d>6)
//		{
//			status = 1;
//		}
//		//�ж�������ȷ��
//		if (status == 1 || cin.good() == 0)
//		{
//			//printf("%d,%d\n",status, ret);
//			cout << "����Ƿ�������������\n";
//			int temp;
//			cin.clear();
//			while ((temp = getchar()) != '\n')
//			{
//				;//�����
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{
//		num = 31;
//	}
//	else if (m == 2)
//	{
//		num = 28 + leap;
//	}
//	else
//	{
//		num = 30;
//	}
//	//������ȷ����ʼ��ӡ
//	cout << y << "��" << m << "�µ�����Ϊ:\n";
//	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������\n";
//	for (int i = 0; i < d; i++)
//	{
//		//�˸��ո�
//		cout << "        ";
//	}
//	int current = 0;
//	while (true)
//	{
//		for (; d < 7; d++)
//		{
//			current++;
//			//��λ���������ּ����ĸ��ո�
//			cout << setw(4) << current << "    ";
//			if (current == num)
//				break;
//		}
//		d = 0;
//		if (current == num)
//		{
//			cout << endl;
//			break;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
