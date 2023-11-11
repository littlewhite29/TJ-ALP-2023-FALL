///*2051891 信管 黄治东*/
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
//	cout << "请输入任意个正整数（升序，最多20个），0或负数结束输入\n";
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
//	cout << "原数组为：\n";
//	print_arr(arr, size);
//	cout << "请输入要插入的正整数\n";
//	cin >> insert;
//	insert_arr(arr, insert, size);
//	cout << "插入后的数组为：\n";
//	size++;
//	print_arr(arr, size);
//
//}