#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int is_rotate(char *str1, char *str2)           //�ж��ַ����Ƿ���Ⱥ���
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
int left_rotate(char* str1, char *str2, int sz)   //��������
{
	int p = sz;
	int i = 0;
	int ret = 0;
	while (p--)
	{
     	char temp = str2[0];          //�����ַ���ÿ���ȱ�������
		for (i = 0; i < sz - 1; i++)
		{
			str2[i] = str2[i + 1];       //ʹ�ַ�������ǰ��

		}
		str2[i] = temp;           //�ѱ�������ݸ�����߿��˵��±���
		ret = is_rotate(str1, str2);       //�����ַ�����ÿ����ת����бȽ�
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
		printf("�ַ���str2�Ǿ����ַ���str1��ת��\n");
	}
	else
	{
    	printf("�ַ���str2���Ǿ����ַ���str1��ת��\n");
	}
	system("pause");
	return 0;
}