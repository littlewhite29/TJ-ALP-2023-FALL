////2051891 信管 黄治东
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//
//int main()
//{
//	double n;
//	int digit = 0;//当前位数字
//	int num;//除数
//	bool highest = true;//是否是最高位
//	bool skip = false;//之前是否有跳过未输出的0,为1则前缀输出零，为0若当前位为0则赋值为true
//	printf("请输入[0-100亿)之间的数字:\n");
//	scanf("%lf", &n);
//
//	printf("大写结果是:\n");
//
//	//除数初始化:十亿
//	num = 1000000000;
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("拾");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("亿");
//	}
//	//后缀输出 必定输出亿
//	if (digit != 0)
//		printf("亿");
//
//	//----------------------------------亿位到此结束-------------------------------------------
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("仟");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("佰");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("拾");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("万");
//	}
//	//后缀输出 必定输出万
//	if (digit != 0)
//		printf("万");
//	//---------------------------------万位到此结束-------------------------------------
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("仟");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("佰");
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("拾");
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		printf("圆");
//	}
//	//后缀输出 必定输出圆
//	if (digit != 0)
//		printf("圆");
//
//	if ((int)floor(100 * n) == 0)
//	{
//		printf("整");
//		highest = true;
//
//	}
//
//	n += 0.0001;//处理误差
//	//--------------------------------整数部分到此结束-----------------------------------------------
//	//除数转乘数
//	num = 10;
//
//	//状态转移
//	digit = (int)(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("角");
//
//	//状态转移
//	digit = (int)round(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == true)
//		{
//			printf("零");
//		}
//		skip = false;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			printf("壹");
//			break;
//		case 2:
//			printf("贰");
//			break;
//		case 3:
//			printf("叁");
//			break;
//		case 4:
//			printf("肆");
//			break;
//		case 5:
//			printf("伍");
//			break;
//		case 6:
//			printf("陆");
//			break;
//		case 7:
//			printf("柒");
//			break;
//		case 8:
//			printf("捌");
//			break;
//		case 9:
//			printf("玖");
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		printf("整");
//	}
//	//后缀输出
//	if (digit != 0)
//		printf("分");
//
//
//	//结尾
//	printf("\n");
//	return 0;
//}
