#include<stdio.h>
void actionA()
{
    printf("执行A");
}
void actionB()
{
    printf("执行B");
}
int main()
{
   

    char X;
    printf("请选择您希望的play\n");
    X = getchar();
    switch (X)
    {
    case'A':actionA(); break;
    case'B':actionB(); break;
    default:printf("菜单中没用此选项\n");
    }
        return 0;
}
