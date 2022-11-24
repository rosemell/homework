#include<stdio.h>
#include<math.h>
//判断是否为素数的函数
void judge(int a)
{
	
	int i=0,sqrta = sqrt(a);
	if (a % 2 == 0)
		printf("不是素数");
	else
	for ( i = 3; i <=sqrta; i++)
	{
		if (a % i == 0)
			printf("不是素数");
			break;
	}
	if (i>sqrta)
	printf("是素数");
}
int main()
{
	int a;
	printf("please input the number you want to judge\n");
	scanf("%d", &a);
	judge(a);
	return 0;
}
