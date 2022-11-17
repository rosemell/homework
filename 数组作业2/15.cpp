#include<string.h>
#include<stdio.h>
int main()
{
	{
		char a[20] = "abc";
		char a1[10] = "wangduoai";
		//printf("%d\n", strlen(a));

		printf("a[]=");
		puts(a);
		printf("a1[]=");
		puts(a1);
		a[4] = a1[0];
		
		for (int i = 0,k=strlen(a); i <= strlen(a1)+1; i++)
		{
			a[k + i] = a1[i];
			//printf("%c\n",a[k + i  ] = a1[i]);

		}
		
	
		puts(a);
		
	}
	return 0;
}

