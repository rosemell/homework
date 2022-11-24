#include <stdio.h>
int gcd(int a,int b)//辗转相除法求最大公约数
{
	int c;
	for ( c = a % b; c != 0;c= a % b)
	{
		a = b;
		b = c;
	}
	return b;
}
int lcm(int a,int b)//最小公倍数
{
	return a * b / gcd(a, b);//两数相乘除以最大公约数
}
int main()
{
	int a, b;
	printf("please input two int\n");
	scanf("%d%d", &a, &b);
	printf("their gcd is %d", gcd(a, b));
	return 0;
}
