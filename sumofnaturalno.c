#include<stdio.h>
int Sum(int n)
{
    int x=0;
    for(int i=0;i<=n;i++)
    {
        x=x+i;
    }
    return x;
}
main()
{
    int n,sum;
    /*printf("Enter n :");
    scanf("%d",&n);*/
    int i;
    printf("Random Numbers Are:\n");
    n=rand()%1000+100;
    for(i=0;i<25;i++)
    {
    printf("%d\n",n);
    }
    sum=Sum(n);
    printf("The sum of n natural number is :%d",sum);
}
