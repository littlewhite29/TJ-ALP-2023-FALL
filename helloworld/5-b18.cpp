///*2051891 黄治东 信管*/
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
//		//cout << "密码长度[" << pwlen << "]不正确\n";
//		cout << "错误" << endl;
//		return 0;
//	}
//	if (cin.good() == 0)
//	{
//		//cout << "输入非法\n";
//		cout << "错误" << endl;
//		return 0;
//	}
//	if (uppercase < 2 || lowercase < 2 || num < 2 || others < 2)
//	{
//		int count;
//		count = uppercase < 2 ? uppercase : (lowercase < 2 ? lowercase : (num < 2 ? num : others));
//		//cout << "其他符号个数不正确[" << count << "]\n";
//		cout << "错误" << endl;
//		return 0;
//	}
//	if (uppercase + lowercase + num + others > pwlen)
//	{
//		//cout << "所有字符类型之和[" << uppercase << '+' << lowercase << '+' << num << '+' << others << "]大于总密码长度[" << pwlen << "]" << endl;
//		cout << "错误" << endl;
//		return 0;
//	}
//	//开始检验随机密码
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> password;
//		//检查密码长度
//		if (strlen(password) != pwlen)
//		{
//			//cout << "密码长度不正确"<< endl;
//			cout << "错误" << endl;
//			return 0;
//		}
//		int tmp_uppercase, tmp_lowercase, tmp_num, tmp_others;
//		tmp_uppercase = 0, tmp_lowercase = 0, tmp_num = 0, tmp_others = 0;
//
//		//检验密码
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
//				//cout << "非法的字符" << endl;
//				cout << "错误" << endl;
//				return 0;
//			}
//
//		}
//		//检查格字符个数
//		//检查各字符是否达到最小数量
//		if (tmp_uppercase < uppercase || tmp_lowercase < lowercase || tmp_num < num || tmp_others < others)
//		{
//			//cout << "各字符未达到最小数量" << endl;
//			cout << "错误" << endl;
//			return 0;
//		}
//		else if (tmp_uppercase + tmp_lowercase + tmp_num + tmp_others != pwlen)//检查各字符数量之和是否等于长度
//		{
//			//cout << "各字符数量之和不等于总长度" << endl;
//			cout << "错误" << endl;
//			return 0;
//		}
//	}
//	cout << "正确" << endl;
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

