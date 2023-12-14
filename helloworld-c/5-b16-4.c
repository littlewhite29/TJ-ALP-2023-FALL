///*2051891 黄治东 信管*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define STUDENT_NUMBER 10
//
//
//void bubble_sort(int rank[], int score[]);
//void output(int rank[], char name[][9], char ID[][8], int score[]);
//int main()
//{
//	char ID[STUDENT_NUMBER][8] = { 0 };
//	char name[STUDENT_NUMBER][9] = { 0 };
//	int score[STUDENT_NUMBER] = { 0 };
//	int rank[STUDENT_NUMBER] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < STUDENT_NUMBER; i++)
//	{
//		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
//		scanf("%s %s %d", ID[i], name[i], &score[i]);
//	}
//	printf("\n");
//	bubble_sort(rank, score);
//	output(rank, name, ID, score);
//
//
//	return 0;
//}
//
//void bubble_sort(int rank[], int score[])
//{
//	for (int i = 1; i < STUDENT_NUMBER; i++)
//	{
//		for (int j = 1; j < STUDENT_NUMBER + 1 - i; j++)
//		{
//			if (score[rank[j]] > score[rank[j - 1]])
//			{
//				int temp = rank[j];
//				rank[j] = rank[j - 1];
//				rank[j - 1] = temp;
//			}
//		}
//	}
//}
//void output(int rank[], char name[][9], char ID[][8], int score[])
//{
//	printf("全部学生(成绩降序):\n");
//	for (int i = 0; i < STUDENT_NUMBER; i++)
//	{
//		printf("%s %s %d\n", name[rank[i]], ID[rank[i]], score[rank[i]]);
//	}
//}

