#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int is_rotate(char *str1, char *str2)           //判断字符串是否相等函数
{
	if (strcmp(str1, str2) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int left_rotate(char* str1, char *str2, int sz)   //左旋函数
{
	int p = sz;
	int i = 0;
	int ret = 0;
	while (p--)
	{
     	char temp = str2[0];          //把首字符串每次先保存下来
		for (i = 0; i < sz - 1; i++)
		{
			str2[i] = str2[i + 1];       //使字符串依次前移

		}
		str2[i] = temp;           //把保存的内容赋给后边空了的下标中
		ret = is_rotate(str1, str2);       //调用字符串，每次旋转后进行比较
		if (ret)
		{
			break;
		}
	}
	return  ret;
}
int main()
{
	int ret1 = 0;
	char string1[] = "ABCDE";
	char string2[] = "CDABE";
	ret1 = left_rotate(string1, string2, (sizeof string2 / sizeof string2[0] - 1));
	if (ret1)
	{
		printf("字符串str2是经过字符串str1旋转的\n");
	}
	else
	{
    	printf("字符串str2不是经过字符串str1旋转的\n");
	}
	system("pause");
	return 0;
}