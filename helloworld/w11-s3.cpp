///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score[101], size = 0, input[1000], rank = 1;
//	for (int i = 0; i < 101; i++)
//	{
//		score[i] = 0;
//	}
//	//��������
//	cout << "������ɼ������1000������������������\n";
//	for (int i = 0; i < 1000; i++)
//	{
//		cin >> input[i];
//		if (input[i] < 0)
//		{
//			break;
//		}
//		else
//		{
//			score[input[i]] += 1;
//			size++;
//		}
//	}
//	//��ӡ���
//	cout << "���������Ϊ:";
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 10 == 0)
//		{
//			cout << "\n";
//		}
//		cout << input[i] << " ";
//	}
//	cout << endl;
//
//	cout << ("�����������Ķ�Ӧ��ϵΪ:\n");
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			cout << i << " " << score[i] << endl;
//		}
//	}
//	return 0;
//}
///*
//�������ݣ��ɸ��ƺ�ճ�������д�����
//87 86 56 76 87 92 76 0 96 98 0 23 -1
//
//87 86 56 76 87 92 76 96 98 23 55 56 34 23 -1
//*/
