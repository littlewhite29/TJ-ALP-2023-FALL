///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//void binaryToDecimalism(char str[], int Binary)
//{
//	unsigned int ans = 0;
//	int len = 0;
//	unsigned int* a;
//	char* p = str;
//	for (; *p != '\0'; p++, len++);
//	//cout << len << endl;
//	unsigned int digit[32] = { 0 };
//	p = str;
//	a = digit;
//	for (; *p != '\0'; p++, a++)
//	{
//		*a = (unsigned int)(*p - '0');
//	}
//	a = digit;
//	for (int i = 0; i != len; i++, a++);
//	a--;
//	for (int i = len - 1; i >= 0; i--, a--)
//	{
//		//cout << *a<<' ' << (unsigned int)pow(Binary, len - i - 1) * *a << endl;
//		ans += (unsigned int)pow(Binary, len - i - 1) * *a;
//	}
//	cout << ans << endl;
//}
//
//int main()
//{
//	char str[256];
//	/* */
//	cout << "������һ��0/1��ɵ��ַ��������Ȳ�����32\n";
//	cin >> str;
//	binaryToDecimalism(str, 2);
//	return 0;
//}
