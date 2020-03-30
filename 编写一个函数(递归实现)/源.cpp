/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
#include<stdio.h>                                              
#include<stdlib.h>
#include<string.h>
void reverse_string(char * string)
{
	string++;
	if (*string != '\0')
	{
		reverse_string(string);
	}
	string--;
	printf("%c", *string);
}

int main()
{
	char p[12] = "abcdefghijk";
	reverse_string(p);
	system("pause");
	return 0;
}