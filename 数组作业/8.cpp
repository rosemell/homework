#include<stdio.h>
int main()
{
	{
		int a[10][10];
		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				printf("%d,", a[i][j] = i * j);
			}
		}
		printf("\n");
		int max = 0, colum=0,sign=0;
		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if (a[i][j] > max)
				{
					max = a[i][j];
					colum = j;
					
				}
			}
			int j;
			for ( j = 0; j <= 9; j++)
			{
				if (a[i][colum] < a[j][colum])
					break;
				

			}
			if (j == 9)
			{
				printf("%d", max);
				sign = 1;
				break;
			}
		}
		if (!sign)
			printf("此数列无鞍点");

	}



	return 0;
}

