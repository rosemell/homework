#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("please input a num>3\n");
	scanf("%d", &num);
	{int k = sqrt(num);
		for (int i = 2; i <= k; i++)
			if (num % i == 0)
			{
				printf("it's not a ����");
				num = 0;
				break;
			}
	if (num)
		printf("it's a ����");
	
	}
	return 0;
}
