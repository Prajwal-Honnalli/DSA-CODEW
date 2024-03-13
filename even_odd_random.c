#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int num,status=0;
    for(int i=0;i<1 && fscanf(fp,"%d",&num)==1;i++)
    {
        if(num/2==0)
            status=1;
        else
            status=0;
    }
    fp=fopen("even.txt","w");
    if(status==1)
        fprintf(fp,"The given random number is even");
    else
        fprintf(fp,"The given random number is odd");
    fclose(fp);
    return 0;
}
