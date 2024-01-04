///* 2051891 ���ζ� �Ź� */
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class point {
//private:
//	int x;
//	int y;
//	//�����������private���ݳ�Ա�⣬������������κ����͵����ݳ�Ա
//public:
//	int getx() const //�����������const����ʾ�������ڱ��������޸����ݳ�Ա��ֵ 
//	{
//		return x;
//	}
//	int gety() const //�����������const����ʾ�������ڱ��������޸����ݳ�Ա��ֵ
//	{
//		return y;
//	}
//	/* ���Զ�����Ҫ�ĳ�Ա�������������ޣ��������ڷ�ʽʵ�֣�������������ݳ�Ա */
//	void set(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//};
//
//class triangle {
//private:
//	point p1;
//	point p2;
//	point p3;
//	//�����������private���ݳ�Ա�⣬������������κ����͵����ݳ�Ա
//public:
//	/* ������Ҫ������Ӧ���������area����(�β�Ϊ�գ���׼��)��Ҫ����������ܹ��������Σ��򷵻���������򷵻� -1 */
//	double area()
//	{
//
//		if (is_triangle())
//		{
//			double a = sqrt(pow(p2.getx() - p1.getx(), 2) + pow(p2.gety() - p1.gety(), 2));
//			double b = sqrt(pow(p3.getx() - p2.getx(), 2) + pow(p3.gety() - p2.gety(), 2));
//			double c = sqrt(pow(p1.getx() - p3.getx(), 2) + pow(p1.gety() - p3.gety(), 2));
//			double s = (a + b + c) / 2;  // ���ܳ�  
//			return sqrt(s * (s - a) * (s - b) * (s - c));  // ���׹�ʽ�������  
//		}
//		return -1;
//	}
//	/* ���캯�� */
//	triangle(int p1_x, int p1_y, int p2_x, int p2_y, int p3_x, int p3_y)
//	{
//		/* ��p1/p2/p3������ֱ�x,y����ֵ */
//		p1.set(p1_x, p1_y);
//		p2.set(p2_x, p2_y);
//		p3.set(p3_x, p3_y);
//	}
//	/* ���Զ�����Ҫ�ĳ�Ա�������������ޣ��������ڷ�ʽʵ�֣�������������ݳ�Ա */
//	bool is_triangle() {
//		// ����Ƿ����㹲��  
//		if (p1.getx() == p2.getx() && p1.gety() == p2.gety())
//		{
//			return false;  // ������ͬһ�㣬���ܹ���������  
//		}
//		else if (p2.getx() == p3.getx() && p2.gety() == p3.gety())
//		{
//			return false;  // ������ͬһ�㣬���ܹ���������  
//		}
//		else if (p1.getx() == p3.getx() && p1.gety() == p3.gety())
//		{
//			return false;  // ������ͬһ�㣬���ܹ���������  
//		}
//
//		if ((p2.getx() - p1.getx()) == 0 || (p3.getx() - p2.getx()) == 0)
//		{
//			if ((p2.getx() - p1.getx()) == 0 && (p3.getx() - p2.getx()) == 0)
//			{
//				return false;
//			}
//			else
//			{
//				return true;
//			}
//		}
//
//		double slope1 = (p2.gety() - p1.gety()) /(double) (p2.getx() - p1.getx());
//		double slope2 = (p3.gety() - p2.gety()) /(double) (p3.getx() - p2.getx());
//
//		if (slope1 == slope2) {
//			return false;  // ���㹲�ߣ����ܹ���������  
//		}
//		return true;  // ���Թ���������  
//	}
//};
//
///* -- �滻����� -- ���в�Ҫ���κθĶ� -- ���в�Ҫɾ�� -- �ڱ��е����治Ҫ�����κ��Լ�����䣬��ҵ�ύ��ӱ��п�ʼ�ᱻ�滻 -- �滻����� -- */
//
///***************************************************************************
//  �������ƣ�
//  ��    �ܣ�
//  ���������
//  �� �� ֵ��
//  ˵    ����main������׼��
//***************************************************************************/
//int main()
//{
//	if (1) {
//		triangle tr(0, 0, 0, 1, 1, 0);  //������Ϊ(0,0) (0,1) (1,0)�������
//		cout << "���������Ӧ���ǣ�0.5��ʵ���ǣ�" << tr.area() << endl;
//	}
//
//	if (1) {
//		triangle tr(0, 2, -1, -1, 1, -1);  //������Ϊ(0,2) (-1,-1) (1,-1)�������
//		cout << "���������Ӧ���ǣ�3��  ʵ���ǣ�" << tr.area() << endl;
//	}
//
//	if (1) {
//		triangle tr(5, 5, -3, 1, 9, -2);  //������Ϊ(5,5) (-3,1) (9,-2)�������
//		cout << "���������Ӧ���ǣ�36�� ʵ���ǣ�" << tr.area() << endl;
//	}
//
//	if (1) {
//		triangle tr(0, 0, 1, 1, 2, 2);  //���㹲��
//		cout << "���������Ӧ���ǣ�-1�� ʵ���ǣ�" << tr.area() << endl;
//	}
//
//	return 0;
//}
