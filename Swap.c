#include<stdio.h>  
int main()
{
int a,b,c;
printf("Enter two numbers: ");
Scanf("%d%d",&a,&b);
printf("%d,%d",a,b \n);
printf("The numbers before swapping are a=%d and b=%d",a,b \n);
c=a;
a=b;
b=c;
printf("The numbers after swapping are a=%d and b=%d",a,b);
return 0;
}
