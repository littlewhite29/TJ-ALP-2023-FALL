///* 2051891 黄治东 信管 */
//#include <iostream>
//using namespace std;
//
///* 1、不允许定义任何类型的全局变量，包括常变量及宏定义等
//   2、不允许给出任何形式的全局函数
//*/
//
///* --- 将类的定义补充完整 --- */
//class Days {
//private:
//	int year;
//	int month;
//	int day;
//	//除上面的三个private数据成员外，不再允许添加任何类型的数据成员
//
//	/* 下面可以补充需要的类成员函数的定义（不提供给外界，仅供本类的其它成员函数调用，因此声明为私有，数量不限，允许不定义） */
//public:
//	int calc_days();     //计算是当年的第几天
//
//	/* 下面可以补充其它需要的类成员函数的定义(体外实现)，数量不限，允许不定义 */
//	Days(int y, int m, int d);
//};
//
///* --- 此处给出类成员函数的体外实现 --- */
//int Days::calc_days()
//{
//	int status = 0;//输入状态，取0正常，取1月份不正确，取2日不正确
//	int num = 0;//天数的计算
//	int leap = 0;//是否闰年，是取1，否取0
//	int normal_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int leap_month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	printf("请输入年，月，日\n");
//	num += day;
//	leap = ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0);
//	if (month <= 0 || month > 12)
//	{
//		status = 1;
//
//	}
//	else if (leap == 0)
//	{
//		if (day > normal_month[(month - 1)] || day < 1)
//		{
//			status = 2;
//		}
//	}
//	else
//	{
//		if (day > leap_month[(month - 1)] || day < 1)
//		{
//			status = 2;
//		}
//	}
//	if (status == 0)
//	{
//		for (int i = 0; i < month - 1; i++)
//		{
//			if (leap == 0)
//			{
//				num += normal_month[i];
//			}
//			else
//			{
//				num += leap_month[i];
//			}
//		}
//		//printf("%d-%d-%d是%d年的第%d天\n", y, m, d, y, num);
//		return num;
//	}
//	else if (status == 1)
//	{
//		//printf("输入错误-月份不正确\n");
//		return -1;
//	}
//	else if (status == 2)
//	{
//		//printf("输入错误-日与月的关系非法\n");
//		return -1;
//	}
//	return 0;
//}
//
//Days::Days(int y, int m, int d) : year(y), month(m), day(d) {}
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：main函数不准动
// ***************************************************************************/
//int main()
//{
//	if (1) {
//		Days d1(2020, 3, 18);
//		cout << "应该输出78， 实际是：" << d1.calc_days() << endl;
//	}
//
//	if (1) {
//		Days d1(2023, 3, 18);
//		cout << "应该输出77， 实际是：" << d1.calc_days() << endl;
//	}
//
//	if (1) {
//		Days d1(2020, 12, 31);
//		cout << "应该输出366，实际是：" << d1.calc_days() << endl;
//	}
//
//	if (1) {
//		Days d1(2023, 12, 31);
//		cout << "应该输出365，实际是：" << d1.calc_days() << endl;
//	}
//
//	if (1) {
//		Days d1(2020, 2, 29);
//		cout << "应该输出60， 实际是：" << d1.calc_days() << endl;
//	}
//
//	if (1) {
//		Days d1(2023, 2, 29);
//		cout << "应该输出-1， 实际是：" << d1.calc_days() << endl;
//	}
//
//	return 0;
//}
