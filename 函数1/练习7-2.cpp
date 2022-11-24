#include<stdio.h>
#include<math.h>
				//没用到，我直接printf！！！！
			//int x1, x2;//创建全局变量供函数使用可以直接赋值
					////以避免需要返回两个值的情况发生
void p_dis(int a,int b,int c,int dis)//当dis>0时求函数的两个根
{
	printf("x1=%lf",(-b + sqrt(dis)) / (double)2 * a);
	printf("x2=%lf",(-b - sqrt(dis)) / 2 * a);
}
void n_dis(int a, int b, int c, int dis)//当dis<0时求两个虚数根
{
	int d = -b / 2*a;
	int e = sqrt(c / a - d * d);
	if (e > 0)
		printf("x1=%d+%di,x2=%d-%di", d, e, d, e);
	else
		printf("x1=%d+%di,x2=%d%di\n", d,-e, d, e);
		printf("%d\n", e);
		printf("1");
}
void dis0(int a,int b)
{
	printf("%lf", -b / (double)(2 * a));
}
int main()
{
	int a, b, c,dis;
	printf("please input three coefficient of your equation:\n");
	scanf("%d%d%d", &a,&b,&c);
	dis = b * b - 4 * a * c;
	if (dis > 1e-6)
	{
		p_dis(a, b, c, dis);
	}
	else if(dis==0)//此else if 不能与下方else if调换位置，因为0<1e-6
		dis0(a, b);
	else if(dis < 1e-6)
	{
		n_dis(a, b, c, dis);
	}
	
	return 0;
}
