///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
////ʹ��ȫ�ֱ�����¼ջ��ָ��
//int top[3] = { 0,0,0 };
////ʹ��ȫ������ģ��ջ
//int stack[3][10];
////ʹ��ȫ�ֱ�����¼������
//int step = 0;
//
//void print_hanoi()
//{
//
//	for (int i = 0; i < 3; i++)
//	{
//		char name = 'A' + i;
//		cout << setw(2) << name << ":";
//		for (int j = 0; j < 10; j++)
//		{
//			if (j < top[i])
//			{
//				cout << setw(2) << stack[i][j];
//			}
//			else
//			{
//				cout << setw(2) << "";
//			}
//		}
//	}
//	cout << endl;
//}
///*����ת�����ӵĺ���*/
//void transfer_hanoi(char src, char dst)
//{
//	//�洢ת�Ƶ�ת��
//	int temp = 0;
//	int source = src - 'A';
//	int destination = dst - 'A';
//
//	temp = stack[source][--top[source]];
//	stack[destination][top[destination]++] = temp;
//}
///*��ʼ������*/
//void init_hanoi(char src, int n)
//{
//	int source = src - 'A';
//	for (int i = 0; i < n; i++)
//	{
//		stack[source][i] = n - i;
//	}
//	top[source] = n;
//}
//
//
//
//void hanoi(int n, char src, char tmp, char dst)
//{
//	//�����ж��Ƿ�Ϊ1
//	if (n == 1)
//	{
//		step++;
//		cout << "��" << setw(4) << step << " ��";
//		cout << "(" << setw(2) << n << "): " << src << "-->" << dst;
//		//�������ջ
//		transfer_hanoi(src, dst);
//		//��ӡջ
//		print_hanoi();
//	}
//	else
//	{
//		//����Ϊ1���������Ϊn-1���̴ӵ�ǰ���ƶ����м���
//		hanoi(n - 1, src, dst, tmp);
//		//Ȼ��ʣ��һ�����ƶ���������
//		step++;
//		cout << "��" << setw(4) << step << " ��";
//		cout << "(" << setw(2) << n << "): " << src << "-->" << dst;
//		//�������ջ
//		transfer_hanoi(src, dst);
//		//��ӡջ
//		print_hanoi();
//		//����ٽ�n-1���̴��м����ƶ���������
//		hanoi(n - 1, tmp, src, dst);
//	}
//}
//
//int clear_buffer()
//{
//	static int temp;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//	return temp;
//}
//
//int main()
//{
//	int n;//����
//	char src;//��ʼ��
//	char dst;//Ŀ����
//	char tmp;//�м���
//	int temp;//����������Ĺ��߱���
//	while (true)
//	{
//		cout << "�����뺺ŵ���Ĳ���(1-10)\n";
//		cin >> n;
//		if (n >= 1 && n <= 16)
//		{
//			break;
//		}
//		//���������Ƿ���ȷ����ջ�����
//		cin.clear();
//		temp = clear_buffer();
//
//	}
//	//���������Ƿ���ȷ����ջ�����
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "��������ʼ��(A-C)\n";
//		if ((src = getchar()) >= 'A' && src <= 'C')
//		{
//			break;
//		}
//		else if (src >= 'a' && src <= 'c')
//		{
//			src -= 32;
//			break;
//		}
//
//		//���������Ƿ���ȷ����ջ�����
//		temp = clear_buffer();
//	}
//	//���������Ƿ���ȷ����ջ�����
//	temp = clear_buffer();
//	while (true)
//	{
//		cout << "������Ŀ����(A-C)\n";
//		if ((dst = getchar()) == src || (dst == src + 32 && (dst -= 32)))
//		{
//			cout << "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ\n";
//		}
//		else if (dst >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//		else if ((dst = dst - 32) >= 'A' && dst <= 'C')
//		{
//			tmp = 'A' + 'B' + 'C' - dst - src;
//			break;
//		}
//
//		//���������Ƿ���ȷ����ջ�����
//		temp = clear_buffer();
//
//	}
//	//��ʼ��ջ
//	init_hanoi(src, n);
//	//��ӡ��ʼջ
//	cout << "��ʼ:" << setw(15) << "";
//	//print_hanoi();
//	print_hanoi();
//	//��ʼת��
//	hanoi(n, src, tmp, dst);
//
//}
