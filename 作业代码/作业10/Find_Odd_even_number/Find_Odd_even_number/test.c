#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);//15
					//00000000000000000000000000001111
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	system("pause");
	return 0;
}