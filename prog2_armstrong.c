#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,b,n1,a1,b1,n2;
    int tmp=0;
    int tmp1,sum;
    printf("enter a number ");
    scanf("%d",&n);
    
    n1=n;
    n2=n;

    for(;n!=0;)
    {
        a=n%10;
        b=n/10;
        n=b;
        tmp++;
    }

    //printf("lenght is %d\n",tmp);
    tmp1=tmp;
    //printf("%d\n",n1);

    for(;n1!=0;)
    {
        a1=n1%10;
        b1=n1/10;
        n1=b1;
        sum=sum+ pow(a1,tmp1);
    }

    if (n2 == sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }

    return 0;
}
