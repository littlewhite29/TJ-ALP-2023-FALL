///*2051891 信管 黄治东*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int score[101], size = 0, input[1000], rank = 1;
//	for (int i = 0; i < 101; i++)
//	{
//		score[i] = 0;
//	}
//	//处理输入
//	cout << "请输入成绩（最多1000个），负数结束输入\n";
//	for (int i = 0; i < 1000; i++)
//	{
//		cin >> input[i];
//		if (input[i] < 0)
//		{
//			break;
//		}
//		else
//		{
//			score[input[i]] += 1;
//			size++;
//		}
//	}
//	//打印结果
//	cout << "输入的数组为:";
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 10 == 0)
//		{
//			cout << "\n";
//		}
//		cout << input[i] << " ";
//	}
//	cout << endl;
//
//	cout << "分数与名次的对应关系为:\n";
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			for (int j = 0; j < score[i]; j++)
//			{
//				cout << i << " " << rank << endl;
//			}
//			rank += score[i];
//		}
//	}
//}
