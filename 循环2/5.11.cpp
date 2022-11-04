#include<stdio.h>
int main()
{
	printf("pleae input your words\n");
	for (char c; (c = getchar()) != '\n';)
	{
		if (c < 'w' && c >= 'a' || c < 'W' &&c >= 'A')
			c += 4;
		else if ('w' <= c && c <= 'z')
		{
			c = 'a' + (c - 'w');

		}
		else if ('W' <= c && c <= 'Z')
			c = 'A' + (c - 'W');
			putchar(c);
	}
	return 0;
}

