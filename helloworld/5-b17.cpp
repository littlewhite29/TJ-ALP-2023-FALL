///*2051891 ���ζ� �Ź�*/
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char password[20] = { 0 };
//	char other_character[16] = "!@#$%^&*-_=+,.?";
//	int pwlen, uppercase, lowercase, num, others;
//	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)\n";
//	cin >> pwlen >> uppercase >> lowercase >> num >> others;
//	if (pwlen < 12 || pwlen>16)
//	{
//		cout << "���볤��[" << pwlen << "]����ȷ\n";
//		return 0;
//	}
//	if (cin.good() == 0)
//	{
//		cout << "����Ƿ�\n";
//		return 0;
//	}
//	if (uppercase < 2 || lowercase < 2 || num < 2 || others < 2)
//	{
//		int count;
//		count = uppercase < 2 ? uppercase : (lowercase < 2 ? lowercase : (num < 2 ? num : others));
//		cout << "�������Ÿ�������ȷ[" << count << "]\n";
//		return 0;
//	}
//	if (uppercase + lowercase + num + others > pwlen)
//	{
//		cout << "�����ַ�����֮��[" << uppercase << '+' << lowercase << '+' << num << '+' << others << "]���������볤��[" << pwlen << "]" << endl;
//		return 0;
//	}
//	cout << pwlen << ' ' << uppercase << ' ' << lowercase << ' ' << num << ' ' << others << endl;
//	//��ʼ����������
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp_uppercase, tmp_lowercase, tmp_num, tmp_others;
//		tmp_uppercase = uppercase, tmp_lowercase = lowercase, tmp_num = num, tmp_others = others;
//		//���ʣ��ֵ
//		int type;
//		for (int left = pwlen - (uppercase + lowercase + num + others); left != 0; left--)
//		{
//			type = rand() % 4;
//			switch (type)
//			{
//				case 0:
//					tmp_uppercase++;
//					break;
//				case 1:
//					tmp_lowercase++;
//					break;
//				case 2:
//					tmp_num++;
//					break;
//				case 3:
//					tmp_others++;
//					break;
//				default:
//					cout << "error:type=" << type << endl;
//					break;
//			}
//		}
//		//��������
//		for (int j = 0; j < pwlen;)
//		{
//			type = rand() % 4;
//			switch (type)
//			{
//				case 0:
//					if (tmp_uppercase != 0)
//					{
//						tmp_uppercase--;
//						password[j] = rand() % 26 + 'A';
//						j++;
//					}
//					break;
//				case 1:
//					if (tmp_lowercase != 0)
//					{
//						tmp_lowercase--;
//						password[j] = rand() % 26 + 'a';
//						j++;
//					}
//					break;
//				case 2:
//					if (tmp_num != 0)
//					{
//						tmp_num--;
//						password[j] = rand() % 10 + '0';
//						j++;
//					}
//					break;
//				case 3:
//					if (tmp_others != 0)
//					{
//						tmp_others--;
//						password[j] = other_character[rand() % 15];
//						j++;
//					}
//					break;
//				default:
//					cout << "error";
//					break;
//			}
//		}
//		//for (int j = 0; j < pwlen ; j++)
//		//{
//		//	cout << (int)password[j] << ' ';
//		//}
//		cout << password << endl;
//	}
//
//	return 0;
//}
//
//

