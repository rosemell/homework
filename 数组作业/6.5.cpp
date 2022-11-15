#include<stdio.h>
int main()
{
	{
		int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}, max=0, row, colum;
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 4; j++)
			{
				if (a[i][j] > max)
				{
					max = a[i][j];
					row = i;
					colum = j;
				}
			}
		}
		printf("the max=%d,row=%d,colum=%d", max, row, colum);
	}

	

	return 0;
}
