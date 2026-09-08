#include<stdio.h>
int main()
{
    int a,b ;
    printf("enter two number to perform arithmetic operators");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    mod=a%b;
    div=(float)(a/b);
    printf("sum=%d\nsub=%d\nmulti=%d\nmod=%d\ndiv=%.2f",add,sub,multi,mod,div");
    printf("division=%f\n",div");
    return 0;
}