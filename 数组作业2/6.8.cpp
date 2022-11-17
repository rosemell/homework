#include<stdio.h>

#include<string.h>
int main()
{
	char word[100];
	int num=0;
	gets(word);
	{
		int k = 0;
		for (int i = 0; word[i] != '\0';i++)
		{

			if (word[i] == ' ')k = 0;
			else if (k == 0)
			{
				num++;
				k++;
			}

		}
	}
	printf("%d", num);
}
