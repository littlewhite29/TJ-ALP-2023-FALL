///* �Ź� 2051891 ���ζ� */
//#include <iostream>
//using namespace std;
//
///* ----����Ҫ��----
//   1����������������ͷ�ļ�
//   2������������ȫ�ֱ�������̬�ֲ�����
//   3��������������������
//   4�������������������κ���ʽ��ѭ����while��do-while��for��if-goto��
//   ---------------------------------------------------------------------
//*/
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ��ݹ鷽ʽ��1^2+...+n^2
//  ���������
//  �� �� ֵ��
//  ˵    ����1�����������βΡ��������;���׼��
//			2�������������κ���ʽ��ѭ����while��do-while��for��if-goto��
//			3��������ʹ��cmath�еĺ���
// ***************************************************************************/
//int sum_of_square(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else return n * n + sum_of_square(n - 1);
//}
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����main����������һ��cout�⣬���಻׼��
// ***************************************************************************/
//int main()
//{
//	int n;
//	cout << "��1^2+2^2+...+n^2��������nֵ[3..1860]" << endl;
//	cin >> n; //[3..1860]������������������������
//
//	/* �˴���������һ��cout��� */
//	cout << "1^2+2^2+...+" << n << "^2=" << sum_of_square(n) << endl;
//	return 0;
//}