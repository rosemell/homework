#include <stdio.h>
int main()
{
	char c=0;
	printf("please input your words\n");
	int eng=0, num=0, blank=0,other=0;
	for (; (c = getchar()) != '\n';)
	{
		printf("%c", c);
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			eng++;
		else if (c == 32)
			blank++;
		else if (c <= 9 && c >= 0)
			num++;
		else
			other++;
	}
	printf("\nӢ���ַ�%d��\n%d���ո�\n%d������\n%d���������", eng, blank, num,other);
	
	
	return 0;
}

