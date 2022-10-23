#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > b)
	{
		a += b;
		b = a - b;
		a -= b;
	}
	if (a > c)
	{
		a += c;
		c = a - a;
		a -= c;
	}
	if (a > d)
	{
		a += d;
		d = a - d;
		a -= d;
	}
	if (b > c)
	{
		b += c;
		c = b - c;
		b -= c;
	}
	if (b > d)
	{
		b += d;
		d = b - d;
		b -= c;
	}
	if (c > d)
	{
		c += d;
		d = c - d;
		c -= d;
	}
	printf("%d\t%d\t%d\t%d\t", a, b, c, d);
}