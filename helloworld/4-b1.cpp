///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//#include <cmath>
//using namespace std;
//
///* �ɸ�����Ҫ�����Ӧ������ */
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ������д��0~9
//  ���������
//  �� �� ֵ��
//  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
//***************************************************************************/
//void daxie(int num, int flag_of_zero)
//{
//	/* ������Ա��������κ��޸� */
//	switch (num) {
//		case 0:
//			if (flag_of_zero)	//�˱��ʲô��˼������˼��
//				cout << "��";
//			break;
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
//		default:
//			cout << "error";
//			break;
//	}
//}
//
///* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����
//***************************************************************************/
//int main()
//{
//	/* ������� */
//	double n;
//	int digit = 0;//��ǰλ����
//	int num;//����
//	bool highest = true;
//	bool flag_of_zero = false;//�Ƿ��������㣬true�����0,false������
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
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "ʰ";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//	}
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//	daxie(digit, flag_of_zero);
//	//��׺��� �ض������
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//		cout << "��";
//	}
//
//
//	//----------------------------------��λ���˽���-------------------------------------------
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "Ǫ";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "ʰ";
//	}
//	else if (highest != false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺��� �ض������
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//		cout << "��";
//	}
//
//
//	//---------------------------------��λ���˽���-------------------------------------
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "Ǫ";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺���
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "ʰ";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//״̬ת��
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//λ�����
//
//	//��׺��� �ض����Բ
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		highest = false;
//		cout << "Բ";
//	}
//	else if (highest == false)
//	{
//		cout << "Բ";
//	}
//
//	n += 0.0001;//�������
//
//	//��������С�����ж����
//	if (floor(100 * n) == 0)
//	{
//		if (highest == true)
//		{
//			daxie(0, true);//�����
//			cout << "Բ";
//		}
//		highest = true;
//		cout << "��";
//	}
//
//	flag_of_zero = false;
//
//	//--------------------------------�������ֵ��˽���-----------------------------------------------
//	//����ת����
//	num = 10;
//
//	//״̬ת��
//	digit = (int)(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//λ�����
//	daxie(digit, flag_of_zero);
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		daxie(0,true);
//	}
//
//
//	//״̬ת��
//	digit = (int)round(100 * n);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//λ�����
//	daxie(digit, flag_of_zero);
//	//��׺���
//	if (digit != 0)
//	{
//		flag_of_zero = true;
//		highest = false;
//		cout << "��";
//	}
//	else if (highest == false)
//	{
//		cout << "��";
//	}
//
//
//	//��β
//	cout << endl;
//	return 0;
//}
