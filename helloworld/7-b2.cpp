///*2051891 ���ζ� �Ź�*/
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
//		cout << "KFC 2023�����˵�\n";
//		cout << "=========================================================================\n";
//		dish menu[MAX_ORDER_NUM] = {
//		   {'A',"�������ȱ�",19.5},{'B',"���༦�ȱ�",19.5},{'C',"�°¶��������ȱ�",20},{'D',"�ϱ��������",18.5},{'E',"�ƽ�SPA���ű�(�ٽ���ζ)",18},
//		   {'F',"������ʽ��ζ��ţ��(����)",18},{'G',"˱ָԭζ��(1��)",12.5},{'H',"�ƽ��Ƥ��",13.5},{'I',"�°¶�������(����)",13.5},{'J',"�������׻�",12},
//		   {'K',"��������(����)",12.5},{'L',"������Ǽ�(����)",12.5},{'M'," ֭֭������������ţ��",55}, {'N',"����(С)",9}, { 'O',"����(��)",12.5 }, { 'P',"����(��)",14.5 },
//		   {'Q',"ܽ��������",9},{'R',"ԭζ��Ͳ�����",6},{'S',"����������",7.5},{'T',"�ƽ𼦿�",12.5},{'U',"��ʽ��̢",8},{'Y',"���¿���(С)",8.5},{'W',"���¿���(��)",10},
//		   {'X',"���¿���(��)",12},{'Y',"�����֭",13},{'Z',"ѩ������",14.5}
//		};
//		package discount[MAX_DISCOUNT_NUM] = {
//		   {"COW","OK������(�������ȱ�)",33.5},
//		   {"HHHHHKKKSUWWW","����ȫ��Ͱ(��Ƥ��)",101},
//		   {"APUY","�����������ļ���(8��)",44},
//		   {"GG","˱ָԭζ��(����)",21}
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
//		cout << "[�Ż���Ϣ]";
//		for (int i = 0; i < MAX_DISCOUNT_NUM; i++)
//		{
//			cout << discount[i].name;
//			print_order(discount[i].code, menu);
//			cout << '=' << discount[i].price << endl;
//
//		}
//		cout << "\n[�������˵��]:\nANV=�������ȱ�+����(С)+���¿���(С) / akaak=�������ȱ�*3+��������*2]\n��ĸ���ִ�Сд������˳�򣬵�������0���˳�����\n";
//		cout << "\n��㵥: ";
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
//				cout << "������󣬰����������.";
//				wait_for_anykey();
//				continue;
//			}
//		}
//		cout << "���ĵ��";
//		print_order(order, menu);
//		cout << "\n����:";
//		price = calc_price(order, menu, discount);
//		cout << price << "Ԫ";
//		cout << "\n�㵥��ɣ������������";
//		wait_for_anykey();
//	}
//
//	return 0;
//}
