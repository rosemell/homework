#include<stdio.h>
#include <string.h>
#define N 30
int a[N] = { 1,2,3,4,5,6,7,8,9 };

void deverse()
{
	int tmp;
	int k=N/2;
	for (int i = 0; i < k; i++)
	{
		tmp = a[i];
		a[i] = a[N - i-1];//�˴�Ӧ����һ����N-1�൱��ֵ�Լ��ٳ��������
		a[N - i-1] = tmp;
	}
}
void printa()//��������ַ�a
{
	for (int i=0;i<=N-1; i++)
	{
		
			printf("%6d", a[i]);
		if((i+1)%5==0)
		printf("\n");
	}
	printf("\n\n");
}

int main()
{

	printa();
	deverse();
	printa();

}
