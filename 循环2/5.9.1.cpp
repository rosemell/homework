#include<stdio.h>
int main()
{
	int num;
	printf("please input a num>3\n");
	scanf("%d", &num);
	{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
		{
			printf("it's not a 质数");
			num = 0;
			break;
		}
	if (num)
		printf("it's a 质数");

	}
	return 0;
}
