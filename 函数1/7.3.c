#include<stdio.h>

//int main()
//{
//	//float max(float, float);
//
//	float a, b, max(float, float);//声明函数
//	scanf("%f%f", &a, &b);
//	printf("%f", max(a, b));
//
//	return 0;
//}
//
//
//
//// 返回最大值函数
//float max(float a,float b)
//{
//	if (a > b)
//		return a;
//	return b;
//}




int main()
{

	float a, b;
	int max(float, float);//声明函数
	scanf("%f%f", &a, &b);
	printf("%d\n", max(a, b));
	return 0;
	
}



// 返回最大值函数
int max(float a, float b)
{
	float z = a > b ? a : b;
	
	/*if (a > b)
		z = a;
	else
		z = b;*/
	return (z);
}
//当函数类型与返回值变量类型不同时系统自动将返回值转换为函数类型
