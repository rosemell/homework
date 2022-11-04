#include<stdio.h>
int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		int k=0;
		for(int num=1,i1=0;num<i;num++)
		{
			if (i % num == 0)
			{
				k += num;

			}
		}
		if (k == i)
		{
			printf("%dits factors are", k);
			for (int num = 1, i1 = 0; num < i; num++)
			{
				if (i % num == 0)
				{
					printf("%d,", num);

				}

			}printf("\b\n");
		}
	}
	return 0;
}
