#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,4,3,2,1 };
	int i, sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum ^= a[i];
	}
	int pos;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)      //1�����ҳ��з������һλȻ���¼����
		{
			pos = i;
			break;
		}
	}
	int num1 = 0, num2 = 0;                                        //  //һ������������������ֻ����һ�Σ���������Ҫ���飬����1����λ��Ϊ1˵�����������з���Ȼ����з���
	for (i = 0; i < 10; i++)
	{
		if (a[i] & 1 << pos)
		{
			num1 ^= a[i];          //����Ϊ1����λ������ 
		}
		else
		{
			num2 ^= a[i];          //����Ϊ0����λ������          
		}

	}
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}