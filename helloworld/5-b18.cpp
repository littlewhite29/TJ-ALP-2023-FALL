///*2051891 ���ζ� �Ź�*/
//#include <iostream>
//
//using namespace std;
//
//bool check_other_characters(char character);
//int main()
//{
//	char temp[200];
//	char password[20] = { 0 };
//	const char other_character[16] = "!@#$%^&*-_=+,.?";
//	int pwlen, uppercase, lowercase, num, others;
//	cin.getline(temp, 200);
//	cin >> pwlen >> uppercase >> lowercase >> num >> others;
//	if (pwlen < 12 || pwlen>16)
//	{
//		//cout << "���볤��[" << pwlen << "]����ȷ\n";
//		cout << "����" << endl;
//		return 0;
//	}
//	if (cin.good() == 0)
//	{
//		//cout << "����Ƿ�\n";
//		cout << "����" << endl;
//		return 0;
//	}
//	if (uppercase < 2 || lowercase < 2 || num < 2 || others < 2)
//	{
//		int count;
//		count = uppercase < 2 ? uppercase : (lowercase < 2 ? lowercase : (num < 2 ? num : others));
//		//cout << "�������Ÿ�������ȷ[" << count << "]\n";
//		cout << "����" << endl;
//		return 0;
//	}
//	if (uppercase + lowercase + num + others > pwlen)
//	{
//		//cout << "�����ַ�����֮��[" << uppercase << '+' << lowercase << '+' << num << '+' << others << "]���������볤��[" << pwlen << "]" << endl;
//		cout << "����" << endl;
//		return 0;
//	}
//	//��ʼ�����������
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> password;
//		//������볤��
//		if (strlen(password) != pwlen)
//		{
//			//cout << "���볤�Ȳ���ȷ"<< endl;
//			cout << "����" << endl;
//			return 0;
//		}
//		int tmp_uppercase, tmp_lowercase, tmp_num, tmp_others;
//		tmp_uppercase = 0, tmp_lowercase = 0, tmp_num = 0, tmp_others = 0;
//
//		//��������
//		for (int j = 0; j < pwlen; j++)
//		{
//
//			if (password[j] >= 'A' && password[j] <= 'Z')
//			{
//				tmp_uppercase++;
//			}
//			else if (password[j] >= 'a' && password[j] <= 'z')
//			{
//				tmp_lowercase++;
//			}
//			else if (password[j] >= '0' && password[j] <= '9')
//			{
//				tmp_num++;
//			}
//			else if (check_other_characters(password[j]))
//			{
//				tmp_others++;
//			}
//			else
//			{
//				//cout << "�Ƿ����ַ�" << endl;
//				cout << "����" << endl;
//				return 0;
//			}
//
//		}
//		//�����ַ�����
//		//�����ַ��Ƿ�ﵽ��С����
//		if (tmp_uppercase < uppercase || tmp_lowercase < lowercase || tmp_num < num || tmp_others < others)
//		{
//			//cout << "���ַ�δ�ﵽ��С����" << endl;
//			cout << "����" << endl;
//			return 0;
//		}
//		else if (tmp_uppercase + tmp_lowercase + tmp_num + tmp_others != pwlen)//�����ַ�����֮���Ƿ���ڳ���
//		{
//			//cout << "���ַ�����֮�Ͳ������ܳ���" << endl;
//			cout << "����" << endl;
//			return 0;
//		}
//	}
//	cout << "��ȷ" << endl;
//	return 0;
//}
//
//bool check_other_characters(char character)
//{
//	const char other_character[16] = "!@#$%^&*-_=+,.?";
//	for (int i = 0; i < 15; i++)
//	{
//		if (other_character[i] == character)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//

