#include <stdio.h>
int gcd(int a,int b)//շת����������Լ��
{
	int c;
	for ( c = a % b; c != 0;c= a % b)
	{
		a = b;
		b = c;
	}
	return b;
}
int lcm(int a,int b)//��С������
{
	return a * b / gcd(a, b);//������˳������Լ��
}
int main()
{
	int a, b;
	printf("please input two int\n");
	scanf("%d%d", &a, &b);
	printf("their gcd is %d", gcd(a, b));
	return 0;
}
