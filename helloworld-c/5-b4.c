////2051891 �Ź� ���ζ�
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
//	//��������
//	printf("������ɼ������1000������������������\n");
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
//	//��ӡ���
//	printf("���������Ϊ:");
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
//	printf("�����������Ķ�Ӧ��ϵΪ:\n");
//	for (int i = 100; i >= 0; i--)
//	{
//		if (score[i] > 0)
//		{
//			printf("%d %d\n", i, score[i]);
//		}
//	}
//}
