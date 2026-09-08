#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two number to perform assignment operators");
   scanf("%d%d",&a,&b);
    printf("%d=%d\n",a+=b,a);
    printf("%d=%d\n",a-=b,a);
    printf("%d=%d\n",a*=b,a);
    printf("%d=%d\n",a/=b,a);
    printf("%d=%d\n",a%=b,a);
    return 0;
    
}   