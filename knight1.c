#include<stdio.h>
void main()
{
int a,r,n;
int sum(int);
printf("enter a number ");
scanf("%d",&a);
r=sum(a);
printf("sum of %dth number is %d",a,r);
getch();
}
int sum(int n)
{
if(n!=0)
return n+sum(n-1);
else
return n;
}