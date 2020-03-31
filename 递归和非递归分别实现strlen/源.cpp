#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h.>
#include<string.h>
int my_strlen_2(const char* str_2)
{
	//递归实现
	if (*str_2)
		return 1 + my_strlen_2(str_2 + 1);
	else
		return 0;
}

int my_strlen_1(const char* str_1)
{
	//非递归实现
	int count = 0;
	while (*str_1)
	{
		count++;
		str_1++;
	}
	return count;
}

int main()
{
	int len_1 = my_strlen_1("abcdef");
	int len_2 = my_strlen_2("abcdef");
	printf("len_1 = %d\n", len_1);
	printf("len_2 = %d\n", len_2);
	system("pause");
	return 0;
}