#include<stdio.h>
void main()
{
int b,p,r,a,o;
int power(int ,int);
printf("enter base and power ");
scanf("%d%d",&b,&p);
r=power(b,p);
printf("result=%d",r);
getch();
}
int power(int a,int o)
{
int n;
if(o!=1)
return a*power(a,o-1);
else
n;
}