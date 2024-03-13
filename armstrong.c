#include<stdio.h>
main()
{
void armstrong(int n);
int armstronge,n;
printf("enter the number\n");
scanf("%d",&n);
armstrong(n);

}
void armstrong(int n)
{
int dig,rev=0,t=n;
while(n!=0)
{
dig=n%10;
rev=rev+dig*dig*dig;
n=n/10;
}
if(t==rev)
printf( "number is armstrong");
else
printf("the number is not armstrong");
}
