#include<stdio.h>
int main()
{
    int a,b,c;
    int gcd =0;
    scanf("%d %d %d",&a,&b,&c);
    int i=1;
    int min=0;
    if(a>b){
        if(a>c){
            min=a;
        }
        else{
            min=c;
        }
    }
    else{
        if(b<c){
            min=b;
        }
        else{
            min=c;
        }
    }
    while(i<=min){
        if(a%i==0 && b%i==0 && c%i==0){
            gcd =i;
        }
        i++;
    }
    printf("%d",gcd);
    return 0;
}