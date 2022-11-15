#include<stdio.h>
int main()
{
	int num=0;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	for(int j=0;j<=2;j++)
	{

	for(int i=0;i<=2;i++) 
{
	if(i+j==2||i==j)
	num+=a[i][j];
}

}
printf("%d",num);	
	
	
	
	
	
	return 0;
}
