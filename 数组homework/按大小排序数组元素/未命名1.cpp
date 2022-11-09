#include<stdio.h>
int main()
{
	{
		int a[10];
		for (int i = 0; i <= 9; i++)//ÊäÈë²¿·Ö
		{
			scanf("%d", &a[i]);
		}
		for (int j=9;j>=0;j--)
		{
			for (int i = 0; i <= j; i++)
			{
				if (a[i] < a[i + 1])
				{
					a[i] += a[i + 1];
					a[i+1] = a[i] - a[i + 1];
					a[i] = a[i] - a[i + 1];
				}
				
			}
		}
			for (int i = 0; i <= 9; i++)
			{
				printf("%12d", a[i]);
			}
		
	}
	return 0;
}
