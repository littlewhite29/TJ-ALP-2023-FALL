////2051891 �Ź� ���ζ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//
//int main()
//{
//	double n;
//	int digit = 0;//��ǰλ����
//	int num;//����
//	bool highest = true;//�Ƿ������λ
//	bool skip = false;//֮ǰ�Ƿ�������δ�����0,Ϊ1��ǰ׺����㣬Ϊ0����ǰλΪ0��ֵΪtrue
//	printf("������[0-100��)֮�������:\n");
//	scanf("%lf", &n);
//
//	printf("��д�����:\n");
//
//	//������ʼ��:ʮ��
//	num = 1000000000;
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("ʰ");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("��");
//	}
//	//��׺��� �ض������
//	if (digit != 0)
//		printf("��");
//
//	//----------------------------------��λ���˽���-------------------------------------------
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("Ǫ");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("��");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("ʰ");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("��");
//	}
//	//��׺��� �ض������
//	if (digit != 0)
//		printf("��");
//	//---------------------------------��λ���˽���-------------------------------------
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("Ǫ");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("��");
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("ʰ");
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("Բ");
//	}
//	//��׺��� �ض����Բ
//	if (digit != 0)
//		printf("Բ");
//
//	if ((int)floor(100 * n) == 0)
//	{
//		printf("��");
//		highest = true;
//
//	}
//
//	n += 0.0001;//�������
//	//--------------------------------�������ֵ��˽���-----------------------------------------------
//	//����ת����
//	num = 10;
//
//	//״̬ת��
//	digit = (int)(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//��׺���
//	if (digit != 0)
//		printf("��");
//
//	//״̬ת��
//	digit = (int)round(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("��");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("Ҽ");
//			break;
//		case 2:
//			printf("��");
//			break;
//		case 3:
//			printf("��");
//			break;
//		case 4:
//			printf("��");
//			break;
//		case 5:
//			printf("��");
//			break;
//		case 6:
//			printf("½");
//			break;
//		case 7:
//			printf("��");
//			break;
//		case 8:
//			printf("��");
//			break;
//		case 9:
//			printf("��");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		printf("��");
//	}
//	//��׺���
//	if (digit != 0)
//		printf("��");
//
//
//	//��β
//	printf("\n");
//	return 0;
//}
