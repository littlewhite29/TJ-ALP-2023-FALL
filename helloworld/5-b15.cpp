///*2051891 黄治东 信管*/
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	char str[3][128] = { 0 };
//	int uppercase = 0;
//	int lowercase = 0;
//	int num = 0;
//	int space = 0;
//	int others = 0;
//	cout << "请输入第1行\n";
//	cin.getline(str[0], 128);
//	cout << "请输入第2行\n";
//	cin.getline(str[1], 128);
//	cout << "请输入第3行\n";
//	cin.getline(str[2], 128);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; str[i][j] != '\0'; j++)
//		{
//			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
//			{
//				uppercase++;
//			}
//			else if (str[i][j] >= 'a' && str[i][j] <= 'z')
//			{
//				lowercase++;
//			}
//			else if (str[i][j] >= '0' && str[i][j] <= '9')
//			{
//				num++;
//			}
//			else if (str[i][j] == ' ')
//			{
//				space++;
//			}
//			else
//			{
//				others++;
//			}
//		}
//	}
//	cout << "大写 : " << uppercase << endl;
//	cout << "小写 : " << lowercase << endl;
//	cout << "数字 : " << num << endl;
//	cout << "空格 : " << space << endl;
//	cout << "其它 : " << others << endl;
//
//
//
//
//	return 0;
//}
