////2051891 �Ź� ���ζ�
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	double n;
//	int digit = 0;//��ǰλ����
//	int num;//����
//	bool highest = true;
//	bool skip = true;//�Ƿ��������������㣬true����Բ����0,false��ǰ׺����㣬����ǰλΪ0ʱ��ֵΪfalse
//	cout << "������[0-100��)֮�������:" << endl;
//	cin >> n;
//	cout << "��д�����:" << endl;
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
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "ʰ";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//		cout << "��";
//	}
//	//��׺��� �ض������
//	if (digit != 0)
//		cout << "��";
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
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "Ǫ";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "��";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest != false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "ʰ";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest == true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//		cout << "��";
//	}
//	//��׺��� �ض������
//	if (digit != 0)
//		cout << "��";
//
//	//---------------------------------��λ���˽���-------------------------------------
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "Ǫ";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "��";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "ʰ";
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "��";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		cout << "Բ";
//	}
//	//��׺��� �˴����Ͻ��ʹ����ض����Բ
//	if (digit != 0)
//		cout << "Բ";
//
//	if (floor(100 * n) == 0)
//	{
//		highest = true;
//		cout << "��";
//	}
//
//	skip = true;
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
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		cout << "��";
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "��";
//
//	//״̬ת��
//	digit = (int)round(100 * n);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//λ�����
//	if (digit != 0)
//	{
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "Ҽ";
//			break;
//		case 2:
//			cout << "��";
//			break;
//		case 3:
//			cout << "��";
//			break;
//		case 4:
//			cout << "��";
//			break;
//		case 5:
//			cout << "��";
//			break;
//		case 6:
//			cout << "½";
//			break;
//		case 7:
//			cout << "��";
//			break;
//		case 8:
//			cout << "��";
//			break;
//		case 9:
//			cout << "��";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		cout << "��";
//	}
//	//��׺���
//	if (digit != 0)
//		cout << "��";
//
//
//	//��β
//	cout << endl;
//	return 0;
//}
