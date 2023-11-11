////2051891 信管 黄治东
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int score[101], size = 0, ret, input[1000];
//	for (int i = 0; i < 101; i++)
//	{
//		score[i] = 0;
//	}
//	//处理输入
//	printf("请输入成绩（最多1000个），负数结束输入\n");
//	for (int i = 0; i < 1000; i++)
//	{
//		ret = scanf("%d", &input[i]);
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
//	printf("输入的数组为:");
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 10 == 0)
//		{
//			printf("\n");
//		}
//		printf("%d ", input[i]);
//	}
//	printf("\n");
//
//	printf("分数与人数的对应关系为:\n");
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			printf("%d %d\n", i, score[i]);
//		}
//	}
//}
