#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void zuoxuan_(char *str, int len, int k)
{
	int i = 0;
	for (i = 0; i < k; i++)//ѭ��k��
	{
		int j = 0;
		char temp = str[j];
		for (j = 0; j < len - 1; j++)//�ӵڶ����ַ���ʼ���ַ��������󸲸�һλ
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = temp;//����һ���ַ������ַ������λ��
	}
}
void HANSHU()
{
	char str[] = "ABCD1234";
	int k;
    scanf("%d", &k);
	int len = strlen(str);
	printf("ԭ�ַ���:%s\n", str);
	zuoxuan_(str, len, k);
	printf("��������ַ���:%s\n", str);
}
int main()
{
	HANSHU();
	system("pause");
	return 0;
}
