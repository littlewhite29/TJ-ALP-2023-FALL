///*2051891 黄治东 信管*/
//#include <iostream>
//#include <iomanip>
//#include <conio.h>
//using namespace std;
//
//#define MAX_ORDER_NUM  26
//#define MAX_DISCOUNT_NUM 4
//
//struct dish
//{
//	char code;
//	char name[64];
//	double price;
//};
//
//struct package
//{
//	char code[MAX_ORDER_NUM];
//	char name[64];
//	double price;
//};
//void print_order(char input[], dish menu[])
//{
//	int order[MAX_ORDER_NUM] = { 0 };
//	bool first = true;
//	for (char* p = input; *p != '\0'; p++)
//	{
//		order[(*p - 'A')]++;
//	}
//	cout << '=';
//	for (int i = 0; i < MAX_ORDER_NUM; i++)
//	{
//		if (order[i] > 0)
//		{
//			if (!first)
//			{
//				cout << '+';
//			}
//			cout << menu[i].name;
//			if (order[i] > 1)
//			{
//				cout << '*' << order[i];
//			}
//			first = false;
//		}
//	}
//
//}
//double calc_price(char input[], dish menu[], package discount[])
//{
//	double price = 0;
//	int menu_len = MAX_ORDER_NUM;
//	//cout << menu_len;
//	int discount_len = MAX_DISCOUNT_NUM;
//	//cout << discount_len << endl;
//	int order[MAX_ORDER_NUM] = { 0 };
//	for (char* p = input; *p != '\0'; p++)
//	{
//		order[(*p - 'A')]++;
//	}
//	for (int i = 0; i < discount_len;)
//	{
//		int temp[MAX_ORDER_NUM] = { 0 };
//		bool has_discount = true;
//		for (const char* p = discount[i].code; *p != '\0'; p++)
//		{
//			temp[(*p - 'A')]++;
//		}
//		for (int j = 0; j < MAX_ORDER_NUM; j++)
//		{
//			if (order[j] < temp[j])
//			{
//				//cout << order[j] << ' ' << temp[j] << endl;
//				has_discount = false;
//				break;
//			}
//		}
//		if (has_discount)
//		{
//			for (int j = 0; j < MAX_ORDER_NUM; j++)
//			{
//				order[j] -= temp[j];
//			}
//			price += discount[i].price;
//		}
//		else
//		{
//			i++;
//		}
//	}
//
//	for (int i = 0; i < MAX_ORDER_NUM; i++)
//	{
//		if (order[i] > 0)
//		{
//			price += order[i] * menu[i].price;
//		}
//	}
//	return price;
//}
//void wait_for_anykey()
//{
//	int temp = _getch();
//}
//int main()
//{
//	while (1)
//	{
//		system("cls");
//		system("mode con cols=130 lines=45");
//		cout << "=========================================================================\n";
//		cout << "KFC 2023春季菜单\n";
//		cout << "=========================================================================\n";
//		dish menu[MAX_ORDER_NUM] = {
//		   {'A',"香辣鸡腿堡",19.5},{'B',"劲脆鸡腿堡",19.5},{'C',"新奥尔良烤鸡腿堡",20},{'D',"老北京鸡肉卷",18.5},{'E',"黄金SPA鸡排堡(藤椒风味)",18},
//		   {'F',"经典美式风味嫩牛堡(单层)",18},{'G',"吮指原味鸡(1块)",12.5},{'H',"黄金脆皮鸡",13.5},{'I',"新奥尔良烤翅(两块)",13.5},{'J',"劲爆鸡米花",12},
//		   {'K',"香辣鸡翅(两块)",12.5},{'L',"热辣香骨鸡(三块)",12.5},{'M'," 汁汁厚做培根三层和牛堡",55}, {'N',"薯条(小)",9}, { 'O',"薯条(中)",12.5 }, { 'P',"薯条(大)",14.5 },
//		   {'Q',"芙蓉荟萃汤",9},{'R',"原味花筒冰淇凌",6},{'S',"醇香土豆泥",7.5},{'T',"黄金鸡块",12.5},{'U',"葡式蛋挞",8},{'Y',"百事可乐(小)",8.5},{'W',"百事可乐(中)",10},
//		   {'X',"百事可乐(大)",12},{'Y',"九珍果汁",13},{'Z',"雪顶咖啡",14.5}
//		};
//		package discount[MAX_DISCOUNT_NUM] = {
//		   {"COW","OK三件套(香辣鸡腿堡)",33.5},
//		   {"HHHHHKKKSUWWW","超爆全家桶(脆皮鸡)",101},
//		   {"APUY","人气明星配四件套(8折)",44},
//		   {"GG","吮指原味鸡(两块)",21}
//		};
//		char order[MAX_ORDER_NUM];
//		double price = 0;
//		for (int i = 0; i < MAX_ORDER_NUM; i++)
//		{
//			cout << setiosflags(ios::left);
//			cout << ' ' << setw(2) << menu[i].code << setw(MAX_ORDER_NUM) << menu[i].name << setw(4) << menu[i].price;
//			if (i % 2 == 0)
//			{
//				cout << "  |  ";
//			}
//			else
//			{
//				cout << endl;
//			}
//		}
//		cout << "[优惠信息]";
//		for (int i = 0; i < MAX_DISCOUNT_NUM; i++)
//		{
//			cout << discount[i].name;
//			print_order(discount[i].code, menu);
//			cout << '=' << discount[i].price << endl;
//
//		}
//		cout << "\n[输入规则说明]:\nANV=香辣鸡腿堡+薯条(小)+百事可乐(小) / akaak=香辣鸡腿堡*3+香辣鸡翅*2]\n字母不分大小写，不限顺序，单独输入0则退出程序\n";
//		cout << "\n请点单: ";
//		cin >> order;
//		for (char* p = order; *p != '\0'; p++)
//		{
//			if (*p >= 'a' && *p <= 'z')
//			{
//				*p -= 'a' - 'A';
//			}
//			else if (*p < 'A' || *p>'Z')
//			{
//				char* q = p;
//				q++;
//				if (*q == '\0')
//				{
//					return 0;
//				}
//				cout << "输入错误，按任意键继续.";
//				wait_for_anykey();
//				continue;
//			}
//		}
//		cout << "您的点餐";
//		print_order(order, menu);
//		cout << "\n共计:";
//		price = calc_price(order, menu, discount);
//		cout << price << "元";
//		cout << "\n点单完成，按任意键继续";
//		wait_for_anykey();
//	}
//
//	return 0;
//}
