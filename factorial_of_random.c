#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int num,j;
    int n=1;
    for(int i=0;i<1 && fscanf(fp,"%d",&num)==1;i++)
    {
        for(j=1;j<=num;j++)
            {
                n=n*j;
            }
    }
    fp=fopen("factorial.txt","w");
    fprintf(fp,"Factorial of a given random no is :%d",n);
    return 0;
}
