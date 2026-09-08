#include<stdio.h>
int main ()
{ int a,b;
printf("enter two number to perform relational operators");
scanf("%d%d",&a,&b);
printf("%d<%d=%d\n",a,b,a<b);
printf("%d>%d=%d\n",a,b,a>b);
printf("%d<=%d=%d\n",a,b,a<=b);
printf("%d>=%d=%d\n",a,b,a>=b);
printf("%d==%d=%d\n",a,b,a==b);
printf("%d!=%d=%d\n",a,b,a!=b);
printf("note:the result of above is \'1\' for true and \'0\' for false");
return 0;}