#include<stdio.h>
int main()
{
	{
		int a[10][10];
		for(int j=0;j<=9;j++)
		{
			for (int i = 0; i <= 9; i++)
			{
				if (i == 0 || i == j)
				{
					a[j][i] = 1;
					printf("%4d", a[j][i]);
				}
				else if (i > j)
					break;
				else
					printf("%4d", a[j][i] = a[j - 1][i - 1] + a[j - 1][i]);
			}
			printf("\n");
		}

	}



	return 0;
}
