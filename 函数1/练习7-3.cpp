#include<stdio.h>
#include<math.h>
//�ж��Ƿ�Ϊ�����ĺ���
void judge(int a)
{
	
	int i=0,sqrta = sqrt(a);
	if (a % 2 == 0)
		printf("��������");
	else
	for ( i = 3; i <=sqrta; i++)
	{
		if (a % i == 0)
			printf("��������");
			break;
	}
	if (i>sqrta)
	printf("������");
}
int main()
{
	int a;
	printf("please input the number you want to judge\n");
	scanf("%d", &a);
	judge(a);
	return 0;
}
