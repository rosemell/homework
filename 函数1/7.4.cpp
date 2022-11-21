#include<stdio.h>
float add(float a, float b)//ºÍº¯Êý
{
	return a + b;
}
int main()
{	
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%f", add(a, b));


	return 0;
}
