#include<stdio.h> 
int main()
{
	//float max(float, float);

	float a, b, max(float, float);//��������
	scanf("%f%f", &a, &b);
	printf("%f", max(a, b));

	return 0;
}



// �������ֵ����
float max(float a,float b)
{
	if (a > b)
		return a;
	return b;
}
