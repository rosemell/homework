#include<stdio.h>
int main()
{
	int num;
	{
		for(num=100;num<=200;num++)
		{
			for (int i = 2; i <= num; i++)
				if (num % i == 0)
				{
					printf("%-20d",num);
					
					break;
				}
			
		}

	}
	return 0;
}
