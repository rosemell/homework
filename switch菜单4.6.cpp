#include<stdio.h>
void actionA()
{
    printf("ִ��A");
}
void actionB()
{
    printf("ִ��B");
}
int main()
{
   

    char X;
    printf("��ѡ����ϣ����play\n");
    X = getchar();
    switch (X)
    {
    case'A':actionA(); break;
    case'B':actionB(); break;
    default:printf("�˵���û�ô�ѡ��\n");
    }
        return 0;
}
