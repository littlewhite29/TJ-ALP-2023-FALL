///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	char str[256], * left, * right;
//	bool is_palindrome = true;
//
//	/* */
//	cout << "������һ������С��80���ַ��������Ĵ���\n";
//	fgets(str, 80, stdin);
//	right = str;
//	left = str;
//	for (; *right != '\n' && *right != '\0'; right++);
//	//cout << (int)*right << ' ' << (int)*left << endl;
//	if (right != left)
//	{
//		right--;
//	}
//	while (true)
//	{
//		if (*right != *left)
//		{
//			is_palindrome = false;
//			break;
//		}
//		if (right == left || right == left + 1)
//		{
//			break;
//		}
//		else
//		{
//			right--;
//			left++;
//		}
//	}
//	if (is_palindrome)
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	return 0;
//}
