#include<stdio.h>
#include <string.h>
int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
void shifta()//ֻ�����ڸ��ض�����ת������
{
	int tmp;
	for (int i = 0; i <= 2; i++)
		for (int j = i; j <= 2; j++)
		{
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
}
void printa()//��������ַ�a
{
	for (int i=0;i<=2;i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	printa();
	shifta();
	printa();

}
