/* 2051891 黄治东 信管 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量（全局只读变量或宏定义不受此限制）
   3、不允许添加其它函数
   ---------------------------------------------------------------------
*/

#define N	10

struct course {
	float value;		//某课程的成绩（百分制）
	float weight;	//某课程的学分（权重）
	int   gpa;		//某课程的绩点（同济规则，[0..60) - 0, [60,70) - 2, [70,80) - 3, [80-90) - 4,[90,100] - 5）
};

struct student {
	int   no;               //学号（虽然用int不够合理，此处不考虑）
	char  name[9];          //假设姓名最长4个汉字
	struct course score[3]; //数组放三门课的成绩（未使用宏定义，函数实现时，直接写3即可）
	float overall_gpa;                    //可增加其它你认为需要增加的结构体成员（限一个），不要则删除本行
};

class gpa_calc {
private:
	struct student stu[N];
	//不再允许增加任何数据成员 
public:
	void input();
	void output_base();
	void output_max();
	                     //可增加其它你认为需要增加的成员函数（限一个），不要则删除本行
};

/* 下面给出gpa_calc类的成员函数的体外实现，包括自己增加的
   要求输出必须是cin/cout */
void gpa_calc::input()
{
	/* 除这两个整型变量外，本函数不再允许定义任何形式的变量
		 如果不用，允许删除，但不得增加或替换为其它形式的变量
		包括for(int i=0; )形式的新变量定义同样禁止 */
	int i, j;

	/* 函数的实现部分 */
	for (i = 0; i < N; i++)
	{
		cout << "请输入第" <<setw(2)<< i + 1 << "个学生的信息 : ";
		cin >> stu[i].no >> stu[i].name;
		for (j = 0; j < 3; j++)
		{
			cin >> stu[i].score[j].value >> stu[i].score[j].weight;
			if (stu[i].score[j].value < 60)
			{
				stu[i].score[j].gpa = 0;
			}
			else if (stu[i].score[j].value < 70)
			{
				stu[i].score[j].gpa = 2;
			}
			else if (stu[i].score[j].value < 80)
			{
				stu[i].score[j].gpa = 3;
			}
			else if (stu[i].score[j].value < 90)
			{
				stu[i].score[j].gpa = 4;
			}
			else
			{
				stu[i].score[j].gpa = 5;
			}
		}
	}
}

void gpa_calc::output_base()
{
	/* 除这两个指针变量外，本函数不再允许定义任何形式的变量
		 如果不用，允许删除，但不得增加或替换为其它形式的变量
		包括for(int i=0; )形式的新变量定义同样禁止 */
	struct student* ps;
	struct course* pc;

	/* 函数的实现部分，不允许任何形式的[]出现 */
	cout<<"\n10个学生的成绩\n";
	cout << "序号 学号    姓名     绩点1 权重1 绩点2 权重2 绩点3 权重3 平均绩点\n";
	cout << "==================================================================\n";
	for (ps = stu; ps - stu < N; ps++)
	{
		cout << setiosflags(ios::left);
		cout << setiosflags(ios::fixed);
		cout << setw(5) << (ps - stu) + 1 << setw(8) << (*ps).no << setw(9) << (*ps).name;
		(*ps).overall_gpa = 0;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			if ((*pc).weight - (int)(*pc).weight != 0)
			{
				cout << setprecision(1);
			}
			else
			{
				cout << setprecision(0);
			}
			cout << setw(6) << (*pc).gpa << setw(6) << (*pc).weight;
			(*pc).value = (*pc).gpa * (*pc).weight;
			(*ps).overall_gpa += (*pc).weight;
		}
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			(*pc).value /= (*ps).overall_gpa;
		}
		(*ps).overall_gpa = 0;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			(*ps).overall_gpa += (*pc).value;
		}
		cout << setprecision(3);
		cout << setw(6) << (*ps).overall_gpa<<endl;
	}
	cout << endl;
}
void gpa_calc::output_max()
{
	/* 本函数中允许定义各种类型的简单变量，但不允许定义数组 */
	float max = 0;
	struct student* ps;
	struct course* pc;
	for (ps = stu; ps - stu < N; ps++)
	{
		if ((*ps).overall_gpa > max)
		{
			max = (*ps).overall_gpa;
		}
	}
	cout<<"绩点最高的学生为\n";
	cout << "序号 学号    姓名     绩点1 权重1 绩点2 权重2 绩点3 权重3 平均绩点\n";
	cout << "==================================================================\n";
	for (ps = stu; ps - stu < N; ps++)
	{
		if ((*ps).overall_gpa != max)
		{
			continue;
		}
		cout << setw(5) << (ps - stu) + 1 << setw(8) << (*ps).no << setw(9) << (*ps).name;
		for (pc = (*ps).score; pc - (*ps).score < 3; pc++)
		{
			if ((*pc).weight - (int)(*pc).weight != 0)
			{
				cout << setprecision(1);
			}
			else
			{
				cout << setprecision(0);
			}
			cout << setw(6) << (*pc).gpa << setw(6) << (*pc).weight;
		}
		cout << setprecision(3);
		cout << setw(6) << (*ps).overall_gpa << endl;
	}

}

   /***************************************************************************
	 函数名称：
	 功    能：
	 输入参数：
	 返 回 值：
	 说    明：main函数不准动
   ***************************************************************************/
int main()
{
	gpa_calc g;

	g.input();		//输入10个学生的信息
	g.output_base();	//输出10个学生的基本信息
	g.output_max();	//输出最高（可能有多个）

	return 0;
}

/*
测试数据，复制到cmd即可

2152482 鄂俊伍 76.5 4 82 5 52 2.5
2250411 林俊吉 63 4.5 49 1 87 6
2250821 郭平伟 56 3 76 4 69 5
2251561 任昱扬 44.5 2 83.5 4 87 6
2252584 欧宇轩 91 4 43.5 1 66 3
2252753 阮飞翔 79 6 85.5 3 62 2
2253554 廖海峰 86 3 63 3 77.5 4
2253711 钟沛橙 49.5 3 86 6 93.5 3
2253968 贾文超 81.5 2 64.5 3 87 4
2254174 任奕 73 3 62 2.5 85 5

*/