#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int a,i;
    for(i=0;i<1 && fscanf(fp,"%d",&a)==1;i++)
    {
        a=a*a;
    }
    fp=fopen("square.txt","w");
    fprintf(fp,"Area of a square is :%d",a);
    fclose(fp);
    return 0;
}
