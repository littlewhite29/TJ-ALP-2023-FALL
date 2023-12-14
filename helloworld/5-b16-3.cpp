///*2051891 黄治东 信管*/
//#include <iostream>
//#define STUDENT_NUMBER 10
//
//using namespace std;
//
//void bubble_sort(int rank[], string ID[]);
//void output(int rank[], string name[], string ID[], int score[]);
//int main()
//{
//	string ID[STUDENT_NUMBER];
//	string name[STUDENT_NUMBER];
//	int score[STUDENT_NUMBER] = { 0 };
//	int rank[STUDENT_NUMBER] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < STUDENT_NUMBER; i++)
//	{
//		cout << "请输入第" << i + 1 << "个人的学号、姓名、成绩\n";
//		cin >> ID[i] >> name[i] >> score[i];
//	}
//	cout << endl;
//	bubble_sort(rank, ID);
//	output(rank, name, ID, score);
//
//
//	return 0;
//}
//
//void bubble_sort(int rank[], string ID[])
//{
//	for (int i = 1; i < STUDENT_NUMBER; i++)
//	{
//		for (int j = 1; j < STUDENT_NUMBER + 1 - i; j++)
//		{
//			if (ID[rank[j]] < ID[rank[j - 1]])
//			{
//				int temp = rank[j];
//				rank[j] = rank[j - 1];
//				rank[j - 1] = temp;
//			}
//		}
//	}
//}
//void output(int rank[], string name[], string ID[], int score[])
//{
//	cout << "全部学生(学号升序):\n";
//	for (int i = 0; i < STUDENT_NUMBER; i++)
//	{
//		cout << name[rank[i]] << " " << ID[rank[i]] << " " << score[rank[i]] << endl;
//	}
//}

