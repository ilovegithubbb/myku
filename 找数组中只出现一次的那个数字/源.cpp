#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a[9] = { 1,2,3,4,5,4,3,2,1 };       //������  ��������ֻ����һ�ε��Ǹ�����
	int i, sum = 0;
	for (i = 0; i < 9; i++)
	{
		sum ^= a[i];
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}