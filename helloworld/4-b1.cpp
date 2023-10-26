///* 2051891 黄治东 信管 */
//#include <iostream>
//#include <cmath>
//using namespace std;
//
///* 可根据需要添加相应的内容 */
//
///***************************************************************************
//  函数名称：
//  功    能：输出大写的0~9
//  输入参数：
//  返 回 值：
//  说    明：除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
//***************************************************************************/
//void daxie(int num, int flag_of_zero)
//{
//	/* 不允许对本函数做任何修改 */
//	switch (num) {
//		case 0:
//			if (flag_of_zero)	//此标记什么意思请自行思考
//				cout << "零";
//			break;
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
//		default:
//			cout << "error";
//			break;
//	}
//}
//
///* 可根据需要自定义其它函数(也可以不定义) */
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
//	/* 按需完成 */
//	double n;
//	int digit = 0;//当前位数字
//	int num;//除数
//	bool highest = true;
//	bool flag_of_zero = false;//是否可以输出零，true则输出0,false则跳过
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
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "拾";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//	}
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//	daxie(digit, flag_of_zero);
//	//后缀输出 必定输出亿
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		cout << "亿";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//		cout << "亿";
//	}
//
//
//	//----------------------------------亿位到此结束-------------------------------------------
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "仟";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "佰";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "拾";
//	}
//	else if (highest != false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出 必定输出万
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "万";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = false;
//		cout << "万";
//	}
//
//
//	//---------------------------------万位到此结束-------------------------------------
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "仟";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "佰";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		flag_of_zero = false;
//		highest = false;
//		cout << "拾";
//	}
//	else if (highest == false)
//	{
//		flag_of_zero = true;
//	}
//
//
//	//状态转移
//	digit = (int)(n / num);
//	n -= (double)(digit)*num;
//	num /= 10;
//	//位数输出
//
//	//后缀输出 必定输出圆
//	if (digit != 0)
//	{
//		if (flag_of_zero == true&&highest==false)
//		{
//			daxie(0, flag_of_zero);
//		}
//		daxie(digit, flag_of_zero);
//		highest = false;
//		cout << "圆";
//	}
//	else if (highest == false)
//	{
//		cout << "圆";
//	}
//
//	n += 0.0001;//处理误差
//
//	//若后续无小数，判断情况
//	if (floor(100 * n) == 0)
//	{
//		if (highest == true)
//		{
//			daxie(0, true);//输出零
//			cout << "圆";
//		}
//		highest = true;
//		cout << "整";
//	}
//
//	flag_of_zero = false;
//
//	//--------------------------------整数部分到此结束-----------------------------------------------
//	//除数转乘数
//	num = 10;
//
//	//状态转移
//	digit = (int)(n * num);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//位数输出
//	daxie(digit, flag_of_zero);
//	//后缀输出
//	if (digit != 0)
//	{
//		flag_of_zero = false;
//		highest = false;
//		cout << "角";
//	}
//	else if (highest == false)
//	{
//		highest = true;
//		daxie(0,true);
//	}
//
//
//	//状态转移
//	digit = (int)round(100 * n);
//	n -= (double)(digit) / num;
//	num *= 10;
//	//位数输出
//	daxie(digit, flag_of_zero);
//	//后缀输出
//	if (digit != 0)
//	{
//		flag_of_zero = true;
//		highest = false;
//		cout << "分";
//	}
//	else if (highest == false)
//	{
//		cout << "整";
//	}
//
//
//	//结尾
//	cout << endl;
//	return 0;
//}
