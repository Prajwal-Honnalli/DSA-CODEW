#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int num,n=1;
    for(int i=0;i<5 && fscanf(fp,"%d",&num)==1;i++)
    {
        n=num*n;
    }
    fp=fopen("multi.txt","w");
    fprintf(fp, "product of an number is :%d",n);
    return 0;
}
