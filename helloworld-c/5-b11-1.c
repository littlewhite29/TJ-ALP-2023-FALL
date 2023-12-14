///* 信管 2051891 黄治东 */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
////可按需增加需要的头文件
//
//const char chnstr[] = "零壹贰叁肆伍陆柒捌玖"; /* 所有输出大写 "零" ~ "玖" 的地方，只允许从这个数组中取值 */
//char result[256];  /* 除result外，不再允许定义任何形式的全局变量 */
//
///* --允许添加需要的函数 --*/
//void daxie(int num, int flag_of_zero,int length)
//{
//	if (num == 0)
//	{
//		if (flag_of_zero)
//		{
//			result[length] = chnstr[0];
//			result[length+1] = chnstr[1];
//		}
//	}
//	else
//	{
//		result[length] = chnstr[2*num];
//		result[length + 1] = chnstr[2*num+1];
//	}
//}
//
//void put_number(double n)
//{
//	double num = n;
//	int digit = 0;//当前位数字
//	int div = 1000000000;//除数初始化:十亿
//	bool highest = true;
//	bool flag_of_zero = false;//是否可以输出零，true则输出0,false则跳过
//	char mid_str[] = "仟佰拾角分";
//	char end_str[] = "亿万圆";
//
//	//计数器初始化
//	int mid_count = 2;
//	int end_count = 0;
//	int length=0;
//
//	while (div != 0)
//	{
//		//状态转移
//		digit = (int)(num / div);
//		num -= (double)(digit)*div;
//		div /= 10;
//		//位数输出
//
//		//后缀输出
//		if (digit != 0)
//		{
//			if (flag_of_zero == true && highest == false)
//			{
//				daxie(0, flag_of_zero,length);
//				length += 2;
//			}
//			daxie(digit, flag_of_zero,length);
//			length += 2;
//			flag_of_zero = false;
//			highest = false;
//			if (mid_count != 3)
//			{
//				result[length] = mid_str[2 * mid_count];
//				result[length + 1] = mid_str[2 * mid_count + 1];
//			}
//			else
//			{
//				result[length] = end_str[2 * end_count];
//				result[length + 1] = end_str[2 * end_count + 1];
//			}
//			length += 2;
//		}
//		else if (highest == false)
//		{
//			flag_of_zero = true;
//			if (mid_count == 3)
//			{
//				result[length] = end_str[2 * end_count];
//				result[length + 1] = end_str[2 * end_count + 1];
//				length += 2;
//			}
//		}
//
//		if (mid_count == 3)
//		{
//			flag_of_zero = false;
//			end_count++;
//		}
//		mid_count = (mid_count + 1) % 4;
//	}
//
//	num += 0.0001;//处理误差
//	mid_count = 3;
//	//若后续无小数，判断情况
//	if (floor(100 * num) == 0)
//	{
//		if (highest == true)
//		{
//			daxie(0, true, length);//输出零
//			length += 2;
//			result[length] = end_str[4];
//			result[length + 1] = end_str[5];
//			length += 2;
//		}
//		highest = true;
//		char temp[] = "整";
//		result[length] = temp[0];
//		result[length + 1] = temp[1];
//		length += 2;
//	}
//
//	flag_of_zero = false;
//
//	//--------------------------------整数部分到此结束-----------------------------------------------
//	//除数转乘数
//	div = 10;
//
//	//状态转移
//	digit = (int)(num * div);
//	num -= (double)(digit) / div;
//	div *= 10;
//	//位数输出
//	daxie(digit, flag_of_zero, length);
//	length += 2;
//	//后缀输出
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		result[length] = mid_str[2 * mid_count];
//		result[length + 1] = mid_str[2 * mid_count + 1];
//		length += 2;
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		daxie(0, true, length);
//		length += 2;
//	}
//
//
//	//状态转移
//	mid_count++;
//	digit = (int)round(100 * num);
//	num -= (double)(digit) / div;
//	div *= 10;
//	//位数输出
//	daxie(digit, flag_of_zero, length);
//	length += 2;
//	//后缀输出
//	if (digit != 0)
//	{
//		flag_of_zero = true;
//		highest = false;
//		result[length] = mid_str[2 * mid_count];
//		result[length + 1] = mid_str[2 * mid_count + 1];
//		length += 2;
//	}
//	else if (highest == false)
//	{
//		char temp[] = "整";
//		result[length] = temp[0];
//		result[length + 1] = temp[1];
//		length += 2;
//	}
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int main()
//{
//    /* --允许添加需要的内容 --*/
//	double n;
//	printf("请输入[0-100亿)之间的数字:\n");
//	scanf("%lf", &n);
//	printf("大写结果是:\n");
//	put_number(n);
//
//    printf("%s\n", result);  /* 转换得到的大写结果，只允许用本语句输出，其它地方不允许以任何形式对大写结果进行全部/部分输出 */
//    return 0;
//}
