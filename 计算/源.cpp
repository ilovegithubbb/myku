#define _CRT_SECURE_NO_WARNINGS             //¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double temp, sum = 0;
	int i;
	for (i = 1; i <= 100; i++)
	{
		temp = 1.0 / i * (i % 2 ? 1 : -1);
		sum = sum + temp;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
