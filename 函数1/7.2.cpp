#include<stdio.h> 
int main()
{
	//float max(float, float);

	float a, b, max(float, float);//声明函数
	scanf("%f%f", &a, &b);
	printf("%f", max(a, b));

	return 0;
}



// 返回最大值函数
float max(float a,float b)
{
	if (a > b)
		return a;
	return b;
}
