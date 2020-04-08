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
		if (sum & 1 << i)      //1左移找出有分歧的那一位然后记录下来
		{
			pos = i;
			break;
		}
	}
	int num1 = 0, num2 = 0;                                        //  //一个数组中有两个数字只出现一次，这类问题要分组，找是1的那位，为1说明两个数字有分歧然后进行分组
	for (i = 0; i < 10; i++)
	{
		if (a[i] & 1 << pos)
		{
			num1 ^= a[i];          //分歧为1的那位的那组 
		}
		else
		{
			num2 ^= a[i];          //分歧为0的那位的那组          
		}

	}
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}