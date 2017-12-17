#include<stdio.h>
void main()
{
 double a,b;
int n;
printf("enter your two number ");
scanf("%lf%lf",&a,&b);
printf("1>addition\n2>subtraction\n3>multipication\n4>division");
printf("\nenter your choice ");
scanf("%d",&n); 
if(n==1)
printf("\naddition is %lf ",a+=b );
if(n==2)
printf("\nsubtraction is %lf",a-=b ); 
if(n==3)
printf("\nmultipication is %lf",a*=b );
if(n==4)
printf("\ndivision is %lf",a/=b ); 
getch();
}