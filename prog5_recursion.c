#include<stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    printf("result is %d\n",fact(a));
    return 0;
}

int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}