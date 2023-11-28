///* 2051891 黄治东 信管 */
//#include <iostream>
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
//	cout << ("分数与人数的对应关系为:\n");
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			cout << i << " " << score[i] << endl;
//		}
//	}
//	return 0;
//}
///*
//测试数据，可复制后粘贴到运行窗口中
//87 86 56 76 87 92 76 0 96 98 0 23 -1
//
//87 86 56 76 87 92 76 96 98 23 55 56 34 23 -1
//*/
