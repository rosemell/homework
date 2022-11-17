#include<stdio.h>

int main()
{
	{
		for (int j = 0; j <= 4; j++)
		{
			for (int i = 0; i <= 8; i++)
				if (j > i)
					printf(" ");
				
			printf("* * * * *\n");
		}
	}
	return 0;
}
