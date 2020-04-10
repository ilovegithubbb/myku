#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void zuoxuan_(char *str, int len, int k)
{
	int i = 0;
	for (i = 0; i < k; i++)//循环k次
	{
		int j = 0;
		char temp = str[j];
		for (j = 0; j < len - 1; j++)//从第二个字符开始，字符依次向左覆盖一位
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = temp;//将第一个字符放在字符串最后位置
	}
}
void HANSHU()
{
	char str[] = "ABCD1234";
	int k;
    scanf("%d", &k);
	int len = strlen(str);
	printf("原字符串:%s\n", str);
	zuoxuan_(str, len, k);
	printf("左旋后的字符串:%s\n", str);
}
int main()
{
	HANSHU();
	system("pause");
	return 0;
}
