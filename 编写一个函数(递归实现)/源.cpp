/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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