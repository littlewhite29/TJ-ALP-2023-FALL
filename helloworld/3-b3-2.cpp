////2051891 �Ź� ���ζ�
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double n;
//	cout << "������һ��[1..100��]�������" << endl;
//	cin >> n;
//	cout << setiosflags(ios::left) << setprecision(1);
//	cout << setw(7) << "ʮ��λ" << ": " << (int)(n / 1000000000) << endl;
//	n -= (double)((int)(n / 1000000000)) * 1000000000;
//	cout << setw(7) << "��λ" << ": " << (int)(n / 100000000) << endl;
//	n -= (double)((int)(n / 100000000)) * 100000000;
//	cout << setw(7) << "ǧ��λ" << ": " << (int)(n / 10000000) << endl;
//	n -= (double)((int)(n / 10000000)) * 10000000;
//	cout << setw(7) << "����λ" << ": " << (int)(n / 1000000) << endl;
//	n -= (double)((int)(n / 1000000)) * 1000000;
//	cout << setw(7) << "ʮ��λ" << ": " << (int)(n / 100000) << endl;
//	n -= (double)((int)(n / 100000)) * 100000;
//	cout << setw(7) << "��λ" << ": " << (int)(n / 10000) << endl;
//	n -= (double)((int)(n / 10000)) * 10000;
//	cout << setw(7) << "ǧλ" << ": " << (int)(n / 1000) << endl;
//	n -= (double)((int)(n / 1000)) * 1000;
//	cout << setw(7) << "��λ" << ": " << (int)(n / 100) << endl;
//	n -= (double)((int)(n / 100)) * 100;
//	cout << setw(7) << "ʮλ" << ": " << (int)(n / 10) << endl;
//	n -= (double)((int)(n / 10)) * 10;
//	cout << setw(7) << "Բ" << ": " << (int)n << endl;
//	n -= (double)((int)n);
//	cout << setw(7) << "��" << ": " << (int)(10 * n) << endl;
//	n -= (double)((int)(10 * n)) / 10;
//	cout << setw(7) << "��" << ": " << 100 * n << endl;
//
//	return 0;
//}
