#include<stdio.h>
main()
{
int i,esum=0,osum=0,n1,n2;
printf("enter the two numbers");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
if(i%2==0)
{
esum=esum+i;
}
else
osum=osum+i;
}
printf("sum of odd numbers=%d\n sum of even numbers=%d\n",osum,esum);
}
