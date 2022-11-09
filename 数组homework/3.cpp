#include<stdio.h>
int main()
{
	{
		int a[10];
		for (int i = 0; i <= 9; i++)//ÊäÈë²¿·Ö
		{
			scanf("%d", &a[i]);
		}
		int j=0,k = 0;

		for (int i = 0; i <= 9; i++)
		{
			if (a[k] < a[i ])
			{
				k = i;
			}
		}
		
		for (int i = 0; i <= 9; i++)
		{
			if (a[j] >a[i])
			{
				j = i;
			}
			
		}
		printf("the max is %d", a[k]);
		printf("the min is %d\n", a[j]);
		a[k] += a[j];
		a[j] = a[k] - a[j];
		a[k] = a[k] - a[j];
		for (int i = 0; i <= 9; i++)
		{
			printf("%12d", a[i]);
			if ((i + 1) % 4 == 0)
				printf("\n");
		}
	}
	return 0;
}
