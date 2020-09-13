#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = (n-1); j > i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <= 2*(i); k++)
		{
			printf("*");
		}
		printf("\n"); 
	}


}