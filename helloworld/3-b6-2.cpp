////2051891 信管 黄治东
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	double n;
//	int digit = 0;//当前位数字
//	int num;//除数
//	bool highest = true;
//	bool skip = true;//是否可以跳过不输出零，true则可以不输出0,false则前缀输出零，当当前位为0时赋值为false
//	cout << "请输入[0-100亿)之间的数字:" << endl;
//	cin >> n;
//	cout << "大写结果是:" << endl;
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
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "拾";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//		cout << "亿";
//	}
//	//后缀输出 必定输出亿
//	if (digit != 0)
//		cout << "亿";
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
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "仟";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "佰";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest != false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "拾";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest == true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = true;
//		cout << "万";
//	}
//	//后缀输出 必定输出万
//	if (digit != 0)
//		cout << "万";
//
//	//---------------------------------万位到此结束-------------------------------------
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "仟";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "佰";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "拾";
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		if (highest != true && skip == false)
//		{
//			cout << "零";
//		}
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		skip = false;
//		cout << "圆";
//	}
//	//后缀输出 此处与上结合使程序必定输出圆
//	if (digit != 0)
//		cout << "圆";
//
//	if (floor(100 * n) == 0)
//	{
//		highest = true;
//		cout << "整";
//	}
//
//	skip = true;
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
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		cout << "零";
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "角";
//
//	//状态转移
//	digit = (int)round(100 * n);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//位数输出
//	if (digit != 0)
//	{
//		skip = true;
//		highest = false;
//		switch (digit)
//		{
//		case 1:
//			cout << "壹";
//			break;
//		case 2:
//			cout << "贰";
//			break;
//		case 3:
//			cout << "叁";
//			break;
//		case 4:
//			cout << "肆";
//			break;
//		case 5:
//			cout << "伍";
//			break;
//		case 6:
//			cout << "陆";
//			break;
//		case 7:
//			cout << "柒";
//			break;
//		case 8:
//			cout << "捌";
//			break;
//		case 9:
//			cout << "玖";
//			break;
//		}
//	}
//	else if (highest == false)
//	{
//		cout << "整";
//	}
//	//后缀输出
//	if (digit != 0)
//		cout << "分";
//
//
//	//结尾
//	cout << endl;
//	return 0;
//}
