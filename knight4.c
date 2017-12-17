#include<stdio.h>
void main()
{
int a,n,r;
int frac(int );
printf("enter a number ");
scanf("%d",&a);
r=frac(a);
printf("\nresult=%d",r);
getch();
}
int frac(int n)
{
if(n!=1)
return n*frac(n-1);
else
 n;
}
