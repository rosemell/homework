//今日份自省
//for循环中k非常重要不能将k替换为strlen
//因为strlen测得的是数组内容的长度会随着数组内容的变化而变化
#include<string.h>
#include<stdio.h>
#define x 25
int main()
{
	{
		
		char code[27]={}, document[27]={};
		for (int j = 0; j <= x; j++)
		{
			code[j] = 'a' + j;
			//printf("%c", code[j]);
		}
		//printf("\n");
		//puts(code);
		//printf("\n");
		for (int i = 0; i <= x; i++)
		{
			code[i]=document[i] = 25 - (code[i] - 'a')+'a';
		}
		//puts(document);
		printf("the origine text is:");
		puts(code);
		for (int i = 0; i <= x; i++)
		{
			document[i] = code[i] = 25 - code[i] + 2 * 'a';
		}
		printf("the true text is:");
		puts(document);

	}
	return 0;
}

