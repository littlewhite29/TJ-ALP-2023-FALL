///*2051891 �Ź� ���ζ�*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//void insert_arr(int arr[], int insert, int size)
//{
//	for (int i = size; i > 0; i--)
//	{
//		if (arr[i - 1] > insert)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = insert;
//			return;
//		}
//	}
//	arr[0] = insert;
//}
//
//void print_arr(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n";
//}
//
//int main()
//{
//	int arr[21];
//	int temp, size, insert;
//	cout << "��������������������������20������0������������\n";
//	for (size = 0; size < 20; size++)
//	{
//		cin >> temp;
//		if (temp <= 0)
//		{
//			break;
//		}
//		else
//		{
//			arr[size] = temp;
//		}
//	}
//	cout << "ԭ����Ϊ��\n";
//	print_arr(arr, size);
//	cout << "������Ҫ�����������\n";
//	cin >> insert;
//	insert_arr(arr, insert, size);
//	cout << "����������Ϊ��\n";
//	size++;
//	print_arr(arr, size);
//
//}