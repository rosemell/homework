#include<stdio.h>
int main()
{
	{
		int a[10];
		double num = 0;
		for (int i = 0; i <= 9; i++)
		{
			scanf("%d", &a[i]);
			num += a[i];
		}
		printf("%lf\n", num / 10);
	}
	return 0;
}
