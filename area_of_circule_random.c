#include<stdlib.h>
#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("number.txt","r");
    int r;
    for(int i=0;i<1 && fscanf(fp,"%d",&r)==1;i++)
    {
        r=3.142*r*r;
    }
    fp=fopen("area.txt","w");
    fprintf(fp,"Area of a given circle is :%d",r);
    fclose(fp);
    return 0;
}
