#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int num, i, n=0;
    for(i=0;i<5&&fscanf(fp,"%d",&num)==1;i++)
    {
        n=num-n;
    }
    fp=fopen("substraction.txt","w");
    fprintf(fp,"subtraction ans is : %d",n);
    fclose(fp);
    return 0;
}
