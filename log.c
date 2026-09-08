#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers to perform logical operations");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",(a>b)&&(b>c));
    printf("%d\n",(a>b)||(b>c));
    printf("%d\n",!(a>b));
    printf("note:the result of above is \'1\' for true and \'0\' for false");
    return 0;
    

}