#include<math.h>
#include<string.h>
#include<stdio.h>

int main()
{
	{
		char zu[240];
		
		//char zu[240]={'\0'};
		int numzu = 0;
		printf("please input your words and stop with ~\n");
		/*for (int i = 0; i <= 239 || (zu[i] = getchar()) != '~'; i++)
		{
			numzu++;
		}*/
		gets(zu);
		puts(zu);

		int A = 0, a = 0, num = 0, blank = 0, other = 0;
		for (int i = 0; i <=strlen(zu); i++)
		{
			if (zu[i] < 'z' && zu[i]>'a')
				a++;
			else if (zu[i] < 'Z' && zu[i]>'A')
				A++;
			else if (zu[i] < '9' && zu[i]>'0')
				num++;
			else if (zu[i] == ' ')
				blank++;
			else
				other++;
		}
		printf("Сд��ĸ����%d\n", a);
		printf("Сд��ĸ����%d\n", A);
		printf("�����ַ�����%d\n", num);
		printf("�ո���%d\n", blank);
		printf("��������%d\n", other);

	}



	return 0;
}
