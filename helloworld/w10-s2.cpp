///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//using namespace std;
//int is_power(int num, int base)
//{
//	if (num == base || num == 1)
//	{
//		return 1;
//	}
//	else if (num % base != 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return is_power(num / base, base);
//	}
//}
//
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����
//***************************************************************************/
//int main()
//{
//	int n, num[10000], base, result = 0;
//	cout << "���������ݵĸ���[1..10000]\n";
//	cin >> n;
//	cout << "������" << n << "��������\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	cout << "���������[2..9]\n";
//	cin >> base;
//	for (int j = 0; j < n; j++)
//	{
//		if (is_power(num[j], base))
//		{
//			result++;
//		}
//	}
//	cout << n << "�����л���" << base << "���ݵĸ��� : " << result << endl;
//
//	return 0;
//}
