/* 2051891 ���ζ� �Ź� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

   //ʹ��ȫ�ֱ�����¼ջ��ָ��
int top_a = 0, top_b = 0, top_c = 0;
//ʹ��ȫ������ģ��ջ
int a[10], b[10], c[10];
//ʹ��ȫ�ֱ�����¼������
int step = 0;
/*��ӡ��������ĺ�����������*/
//void print_hanoi()
//{
//	printf(" A:");
//	for (int i = 0; i < 10; i++)
//	{
//		if (i < top_a)
//		{
//			printf("%2d", a[i]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf(" B:");
//	for (int j = 0; j < 10; j++)
//	{
//		if (j < top_b)
//		{
//			printf("%2d", b[j]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf(" C:");
//	for (int k = 0; k < 10; k++)
//	{
//		if (k < top_c)
//		{
//			printf("%2d", c[k]);
//		}
//		else
//		{
//			printf("  ");
//		}
//	}
//	printf("\n");
//}
/*����ת�����ӵĺ�����������*/
//void transfer_hanoi(char src,char dst)
//{
//	//�洢ת�Ƶ�ת��
//	int temp = 0;
//	switch (src)
//	{
//		case 'A':
//			temp = a[--top_a];
//			a[top_a] = 0;
//			break;
//		case 'B':
//			temp = b[--top_b];
//			b[top_b] = 0;
//			break;
//		case 'C':
//			temp = c[--top_c];
//			c[top_c] = 0;
//			break;
//		default:
//			break;
//	}
//	switch (dst)
//	{
//		case 'A':
//			a[top_a++] = temp;
//			break;
//		case 'B':
//			b[top_b++] = temp;
//			break;
//		case 'C':
//			c[top_c++] = temp;
//			break;
//		default:
//			break;
//	}
//}
/*��ʼ��������������*/
//void init_hanoi(char src, int n)
//{
//	switch (src)
//	{
//		case 'A':
//			for (int i = 0; i < n; i++)
//			{
//				a[i] = n - i;
//			}
//			top_a = n;
//			break;
//		case 'B':
//			for (int i = 0; i < n; i++)
//			{
//				b[i] = n - i;
//			}
//			top_b = n;
//			break;
//		case 'C':
//			for (int i = 0; i < n; i++)
//			{
//				c[i] = n - i;
//			}
//			top_c = n;
//			break;
//		default:
//			break;
//	}
//}

void hanoi(int n, char src, char tmp, char dst)
{
	//�Ƿ��ӡ
	if (n < 0)
	{
		//��ӡ��������
		if (n >= -10)
		{
			if (n == -1)
			{
				printf(" A:");
			}
			int i = (-(n + 1)) % 10;
			if (i < top_a)
			{
				printf("%2d", a[i]);
			}
			else
			{
				printf("  ");
			}
			hanoi(n - 1, ' ', ' ', ' ');
		}
		else if (n >= -20)
		{
			if (n == -11)
			{
				printf(" B:");
			}
			int i = (-(n + 1)) % 10;
			if (i < top_b)
			{
				printf("%2d", b[i]);
			}
			else
			{
				printf("  ");
			}
			hanoi(n - 1, ' ', ' ', ' ');
		}
		else if (n >= -30)
		{
			if (n == -21)
			{
				printf(" C:");
			}
			int i = (-(n + 1)) % 10;
			if (i < top_c)
			{
				printf("%2d", c[i]);
			}
			else
			{
				printf("  ");
			}
			hanoi(n - 1, ' ', ' ', ' ');
		}
		else
		{
			printf("\n");
		}
	}
	else
	{
		//�����ж��Ƿ�Ϊ1
		if (n == 1)
		{
			step++;
			printf("��%4d ��", step);
			printf("(%2d): %c-->%c", n, src, dst);
			//�������ջ
			//�洢ת�Ƶ�ת��
			int temp = 0;
			switch (src)
			{
				case 'A':
					temp = a[--top_a];
					a[top_a] = 0;
					break;
				case 'B':
					temp = b[--top_b];
					b[top_b] = 0;
					break;
				case 'C':
					temp = c[--top_c];
					c[top_c] = 0;
					break;
				default:
					break;
			}
			switch (dst)
			{
				case 'A':
					a[top_a++] = temp;
					break;
				case 'B':
					b[top_b++] = temp;
					break;
				case 'C':
					c[top_c++] = temp;
					break;
				default:
					break;
			}
			//��ӡջ
			//print_hanoi();
			hanoi(-1, ' ', ' ', ' ');
		}
		else
		{
			//����Ϊ1���������Ϊn-1���̴ӵ�ǰ���ƶ����м���
			hanoi(n - 1, src, dst, tmp);
			//Ȼ��ʣ��һ�����ƶ���������
			step++;
			printf("��%4d ��", step);
			printf("(%2d): %c-->%c", n, src, dst);
			//�������ջ
			//�洢ת�Ƶ�ת��
			int temp = 0;
			switch (src)
			{
				case 'A':
					temp = a[--top_a];
					a[top_a] = 0;
					break;
				case 'B':
					temp = b[--top_b];
					b[top_b] = 0;
					break;
				case 'C':
					temp = c[--top_c];
					c[top_c] = 0;
					break;
				default:
					break;
			}
			switch (dst)
			{
				case 'A':
					a[top_a++] = temp;
					break;
				case 'B':
					b[top_b++] = temp;
					break;
				case 'C':
					c[top_c++] = temp;
					break;
				default:
					break;
			}
			//��ӡջ
			//print_hanoi();
			hanoi(-1, ' ', ' ', ' ');
			//����ٽ�n-1���̴��м����ƶ���������
			hanoi(n - 1, tmp, src, dst);
		}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
			2�������������ʱ������ʹ��ѭ��
			3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
	int n;//����
	char src;//��ʼ��
	char dst;//Ŀ����
	char tmp;//�м���
	int temp;//����������Ĺ��߱���
	while (1)
	{
		printf("�����뺺ŵ���Ĳ���(1-10)\n");
		temp = scanf("%d", &n);
		if (n >= 1 && n <= 10)
		{
			break;
		}
		//���������Ƿ���ȷ����ջ�����
		temp = scanf("%*[^\n]");
		temp = scanf("%*c");
	}
	//���������Ƿ���ȷ����ջ�����
	temp = scanf("%*[^\n]");
	temp = scanf("%*c");
	while (1)
	{
		printf("��������ʼ��(A-C)\n");
		if ((src = getchar()) >= 'A' && src <= 'C')
		{
			break;
		}
		else if (src >= 'a' && src <= 'c')
		{
			src -= 32;
			break;
		}
		printf("src=%c", src);
		//���������Ƿ���ȷ����ջ�����
		temp = scanf("%*[^\n]");
		temp = scanf("%*c");
	}
	//���������Ƿ���ȷ����ջ�����
	temp = scanf("%*[^\n]");
	temp = scanf("%*c");
	while (1)
	{
		printf("������Ŀ����(A-C)\n");
		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
		{
			printf("Ŀ����(%c)��������ʼ��(%c)��ͬ\n", dst, src);
		}
		else if (dst >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}
		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
		{
			tmp = 'A' + 'B' + 'C' - dst - src;
			break;
		}

		//���������Ƿ���ȷ����ջ�����
		temp = scanf("%*[^\n]");
		temp = scanf("%*c");

	}
	//��ʼ��ջ
	switch (src)
	{
		case 'A':
			for (int i = 0; i < n; i++)
			{
				a[i] = n - i;
			}
			top_a = n;
			break;
		case 'B':
			for (int i = 0; i < n; i++)
			{
				b[i] = n - i;
			}
			top_b = n;
			break;
		case 'C':
			for (int i = 0; i < n; i++)
			{
				c[i] = n - i;
			}
			top_c = n;
			break;
		default:
			break;
	}
	//��ӡ��ʼջ
	printf("��ʼ:               ");
	//print_hanoi();
	hanoi(-1, ' ', ' ', ' ');
	//��ʼת��
	hanoi(n, src, tmp, dst);

}
