///*2051891 �Ź� ���ζ�*/
//#include <iostream>
//#include <iomanip>
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
//	cout << "���������εĶ�Ӧ��ϵΪ:\n";
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			for (int j = 0; j < score[i]; j++)
//			{
//				cout << i << " " << rank << endl;
//			}
//			rank += score[i];
//		}
//	}
//}
