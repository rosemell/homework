#include<stdio.h>
#include<math.h>
				//û�õ�����ֱ��printf��������
			//int x1, x2;//����ȫ�ֱ���������ʹ�ÿ���ֱ�Ӹ�ֵ
					////�Ա�����Ҫ��������ֵ���������
void p_dis(int a,int b,int c,int dis)//��dis>0ʱ������������
{
	printf("x1=%lf",(-b + sqrt(dis)) / (double)2 * a);
	printf("x2=%lf",(-b - sqrt(dis)) / 2 * a);
}
void n_dis(int a, int b, int c, int dis)//��dis<0ʱ������������
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
	else if(dis==0)//��else if �������·�else if����λ�ã���Ϊ0<1e-6
		dis0(a, b);
	else if(dis < 1e-6)
	{
		n_dis(a, b, c, dis);
	}
	
	return 0;
}
