#include<stdio.h>
int main()
{
	{
		int a[10];
		for (int i = 0; i <= 9; i++)//ÊäÈë²¿·Ö
		{
			scanf("%d", &a[i]);
		}
		for(int k,j=9;j>=0;j--)
		{
			k = j - 1;
			for (int i = 0; i <= k; i++)
			{

				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] = a[i] - a[i + 1];


			}
		}

		for (int i = 0; i <= 9; i++)
		{
			printf("%12d", a[i]);
			if ((i+1) % 4 == 0)
				printf("\n");
		}

	}
	return 0;
}
