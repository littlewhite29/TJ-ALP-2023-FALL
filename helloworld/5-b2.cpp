///*2051891 �Ź� ���ζ�*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int light[100];
//	bool first = true;
//	//��ʼ��
//	for (int i = 0; i < 100; i++)
//	{
//		light[i] = 0;
//	}
//	//���ص�
//	for (int i = 0; i < 100; i++)
//	{
//		int j = i + 1;
//		int temp = j;
//		while (temp <= 100)
//		{
//			light[temp - 1] = light[temp - 1] ? 0 : 1;
//			temp += j;
//		}
//	}
//	//������
//	for (int i = 0; i < 100; i++)
//	{
//		if (light[i] == 1)
//		{
//			if (first)
//			{
//				cout << i + 1;
//				first = false;
//			}
//			else
//			{
//				cout << " " << i + 1;
//			}
//		}
//	}
//	cout << endl;
//}