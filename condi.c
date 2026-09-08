#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter two number to perform conditional operators");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
    return 0; }
    