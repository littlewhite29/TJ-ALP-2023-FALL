///* 2051891 黄治东 信管 */
//
//#include <cstdio>   //NULL
////不再允许包含任何系统头文件
//
///* ----- 不允许定义任何形式的全局变量/全部数组/只读全局变量/宏定义!!!!! ----- */
//
///* 函数实现部分，{ }内的东西可以任意调整，目前的return只是一个示例，可改变 */
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strlen(const char* str)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int i = 0;
//	const char* p;
//	p = str;
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (i = 0; *p != '\0'; i++, p++);
//	return i; //return值可根据需要修改
//	return 0;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strcat(char* s1, const char* s2)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		return 0;
//	}
//	if (p_s2 == NULL)
//	{
//		return s1;
//	}
//	for (int i = 0; i < s1_len; i++, p_s1++);
//	for (int i = 0; i < s2_len + 1; i++)
//	{
//		*(p_s1++) = *(p_s2++);
//	}
//	return s1;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strncat(char* s1, const char* s2, const int len)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		return 0;
//	}
//	if (p_s2 == NULL)
//	{
//		return s1;
//	}
//	for (int i = 0; i < s1_len; i++, p_s1++);
//	for (int i = 0; i < s2_len + 1; i++)
//	{
//		*p_s1 = *p_s2;
//		if (i == len)
//		{
//			*p_s1 = '\0';
//			break;
//		}
//		p_s1++, p_s2++;
//	}
//	return s1;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strcpy(char* s1, const char* s2)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s2_len = tj_strlen(s2);
//	char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		return 0;
//	}
//	if (p_s2 == NULL)
//	{
//		*s1 = '\0';
//		return s1;
//	}
//	for (int i = 0; i <= s2_len; i++)
//	{
//		*p_s1 = *p_s2;
//		p_s1++, p_s2++;
//	}
//	return s1;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strncpy(char* s1, const char* s2, const int len)
//{
//	int s2_len = tj_strlen(s2);
//	char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		return 0;
//	}
//	if (p_s2 == NULL)
//	{
//		return s1;
//	}
//	for (int i = 0; i < s2_len; i++)
//	{
//		*p_s1 = *p_s2;
//		p_s1++, p_s2++;
//		if (i == len)
//		{
//			break;
//		}
//	}
//	return s1;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strcmp(const char* s1, const char* s2)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	const char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		if (p_s2 == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (p_s2 == NULL)
//	{
//		return 1;
//	}
//	int max_len = (s1_len > s2_len ? s1_len : s2_len);
//	for (int i = 0; i <= max_len; i++)
//	{
//		if (*p_s1 != *p_s2)
//		{
//			return *p_s1 - *p_s2;
//		}
//		p_s1++, p_s2++;
//	}
//	return 0; //return值可根据需要修改
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strcasecmp(const char* s1, const char* s2)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	const char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		if (p_s2 == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (p_s2 == NULL)
//	{
//		return 1;
//	}
//	int max_len = (s1_len > s2_len ? s1_len : s2_len);
//	for (int i = 0; i <= max_len; i++)
//	{
//		char temp1 = *p_s1, temp2 = *p_s2;
//		if (temp1 >= 'A' && temp1 <= 'Z')
//		{
//			temp1 += 'a' - 'A';
//		}
//		if (temp2 >= 'A' && temp2 <= 'Z')
//		{
//			temp2 += 'a' - 'A';
//		}
//		if (temp1 != temp2)
//		{
//			return temp1 - temp2;
//		}
//		p_s1++, p_s2++;
//	}
//	return 0; //return值可根据需要修改
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strncmp(const char* s1, const char* s2, const int len)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	const char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		if (p_s2 == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (p_s2 == NULL)
//	{
//		return 1;
//	}
//	int max_len = (s1_len > s2_len ? s1_len : s2_len);
//	for (int i = 0; i < max_len; i++)
//	{
//		if (*p_s1 != *p_s2)
//		{
//			return *p_s1 - *p_s2;
//		}
//		if (i == len - 1)
//		{
//			break;
//		}
//		p_s1++, p_s2++;
//	}
//	return 0; //return值可根据需要修改
//	return 0;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strcasencmp(const char* s1, const char* s2, const int len)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	int s1_len = tj_strlen(s1);
//	int s2_len = tj_strlen(s2);
//	const char* p_s1;
//	const char* p_s2;
//	p_s1 = s1;
//	p_s2 = s2;
//	if (p_s1 == NULL)
//	{
//		if (p_s2 == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (p_s2 == NULL)
//	{
//		return 1;
//	}
//	int max_len = (s1_len > s2_len ? s1_len : s2_len);
//	for (int i = 0; i < max_len; i++)
//	{
//		char temp1 = *(p_s1++), temp2 = *(p_s2++);
//		if (temp1 >= 'A' && temp1 <= 'Z')
//		{
//			temp1 += 'a' - 'A';
//		}
//		if (temp2 >= 'A' && temp2 <= 'Z')
//		{
//			temp2 += 'a' - 'A';
//		}
//		if (temp1 != temp2)
//		{
//			return temp1 - temp2;
//		}
//		if (i == len - 1)
//		{
//			break;
//		}
//
//	}
//	return 0; //return值可根据需要修改
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strupr(char* str)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	char* p;
//	p = str;
//	if (p == NULL)
//	{
//		return str;
//	}
//	for (int i = 0; i < tj_strlen(str); i++)
//	{
//		if (*p >= 'a' && *p <= 'z')
//		{
//			*p -= 'a' - 'A';
//		}
//		p++;
//	}
//
//	return str;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strlwr(char* str)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	char* p;
//	p = str;
//	if (p == NULL)
//	{
//		return str;
//	}
//	for (int i = 0; i < tj_strlen(str); i++)
//	{
//		if (*p >= 'A' && *p <= 'Z')
//		{
//			*p += 'a' - 'A';
//		}
//		p++;
//	}
//	return str;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strchr(const char* str, const char ch)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	const char* p;
//	p = str;
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (int i = 0; i < tj_strlen(str); i++)
//	{
//		if (*(p++) == ch)
//		{
//			return i + 1;
//		}
//	}
//	return 0; //return值可根据需要修改
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strstr(const char* str, const char* substr)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	const char* p, * p_str, * p_substr;
//	if (str == NULL || substr == NULL)
//	{
//		return 0;
//	}
//	p = str;
//	for (; p - str <= tj_strlen(str) - tj_strlen(substr); p++)
//	{
//		if (*p == *substr)
//		{
//			p_str = p;
//			p_substr = substr;
//			for (; p_substr - substr < tj_strlen(substr); p_substr++, p_str++)
//			{
//				if (*p_str != *p_substr)
//				{
//					break;
//				}
//				if (p_substr - substr == tj_strlen(substr) - 1)
//				{
//					return p - str + 1;
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strrchr(const char* str, const char ch)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	const char* p;
//	p = str;
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (; p - str < tj_strlen(str); p++);
//	for (; p - str >= 0; p--)
//	{
//		if (*p == ch)
//		{
//			return p - str + 1;
//		}
//	}
//	return 0;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//int tj_strrstr(const char* str, const char* substr)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	const char* p, * p_str, * p_substr;
//	if (str == NULL || substr == NULL)
//	{
//		return 0;
//	}
//	p = str;
//	for (; p - str < tj_strlen(str) - tj_strlen(substr); p++);
//	for (; ; p--)
//	{
//		if (*p == *substr)
//		{
//			p_str = p;
//			p_substr = substr;
//			for (; p_substr - substr < tj_strlen(substr); p_substr++, p_str++)
//			{
//				if (*p_str != *p_substr)
//				{
//					break;
//				}
//				if (p_substr - substr == tj_strlen(substr) - 1)
//				{
//					return p - str + 1;
//				}
//			}
//		}
//		if (p - str == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//
///***************************************************************************
//  函数名称：
//  功    能：
//  输入参数：
//  返 回 值：
//  说    明：
//***************************************************************************/
//char* tj_strrev(char* str)
//{
//	/* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
//	char* left = str, * right = str;
//	if (str == NULL)
//	{
//		return 0;
//	}
//	for (; right - str + 1 < tj_strlen(str); right++);
//	for (; right - left >= 1; right--, left++)
//	{
//		char temp = *right;
//		*right = *left;
//		*left = temp;
//	}
//	return str;
//}
