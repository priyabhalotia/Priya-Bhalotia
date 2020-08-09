#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a==0 || a==1)
printf("The number is in the list.");
else if(a!=1 && a!=0)
printf("The number is not in the list.");
return 0;
}
