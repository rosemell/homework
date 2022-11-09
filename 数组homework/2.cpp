#include<stdio.h>
int main()
{
	{
		int a[10];
		for (int i = 0; i <= 9; i++)//ÊäÈë²¿·Ö
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i <= 8; i++)
		{
			if (a[i] < a[i + 1])
			{
				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] = a[i] - a[i + 1];
			}
		}
		printf("the min is %d", a[9]);
		for (int i = 0; i <= 7; i++)
		{
			if (a[i] >a[i + 1])
			{
				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] = a[i] - a[i + 1];
			}
			
		}
		printf("the max is %d", a[8]);
	}
	return 0;
}
