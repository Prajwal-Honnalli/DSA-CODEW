#include<stdio.h>
main()
{
int n;
float avg;
int class_avg(int n);
printf("enter the number of students");
scanf("%d",&n);
avg=class_avg(n);
printf("average marks=%f\n",avg);
}
int class_avg(int n)
{
int i,sum=0,m;
float avg;
for(i=1;i<=n;i++)
{
printf("enter the marks");
scanf("%d",&m);
sum=sum+m;
}
avg=(float)sum/n;
return(avg);
}
