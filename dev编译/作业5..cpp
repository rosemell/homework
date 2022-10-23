#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    printf("x=%d", x);
    if (x == 0)
    {
        printf("y=0");
    }
    else
    {
        if (x > 0)
        {
            printf("y=1");
        }
        else
        {
            printf("y=-1");
        }
    }
    return 0;
}
