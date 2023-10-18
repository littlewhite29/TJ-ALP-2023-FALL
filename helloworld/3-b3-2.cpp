////2051891 信管 黄治东
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double n;
//	cout << "请输入一个[1..100亿]间的数字" << endl;
//	cin >> n;
//	cout << setiosflags(ios::left) << setprecision(1);
//	cout << setw(7) << "十亿位" << ": " << (int)(n / 1000000000) << endl;
//	n -= (double)((int)(n / 1000000000)) * 1000000000;
//	cout << setw(7) << "亿位" << ": " << (int)(n / 100000000) << endl;
//	n -= (double)((int)(n / 100000000)) * 100000000;
//	cout << setw(7) << "千万位" << ": " << (int)(n / 10000000) << endl;
//	n -= (double)((int)(n / 10000000)) * 10000000;
//	cout << setw(7) << "百万位" << ": " << (int)(n / 1000000) << endl;
//	n -= (double)((int)(n / 1000000)) * 1000000;
//	cout << setw(7) << "十万位" << ": " << (int)(n / 100000) << endl;
//	n -= (double)((int)(n / 100000)) * 100000;
//	cout << setw(7) << "万位" << ": " << (int)(n / 10000) << endl;
//	n -= (double)((int)(n / 10000)) * 10000;
//	cout << setw(7) << "千位" << ": " << (int)(n / 1000) << endl;
//	n -= (double)((int)(n / 1000)) * 1000;
//	cout << setw(7) << "百位" << ": " << (int)(n / 100) << endl;
//	n -= (double)((int)(n / 100)) * 100;
//	cout << setw(7) << "十位" << ": " << (int)(n / 10) << endl;
//	n -= (double)((int)(n / 10)) * 10;
//	cout << setw(7) << "圆" << ": " << (int)n << endl;
//	n -= (double)((int)n);
//	cout << setw(7) << "角" << ": " << (int)(10 * n) << endl;
//	n -= (double)((int)(10 * n)) / 10;
//	cout << setw(7) << "分" << ": " << 100 * n << endl;
//
//	return 0;
//}
