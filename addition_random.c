#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("number.txt", "r");

    int num,i;
    int n=0;
    for (i=0;i<5 && fscanf(fp, "%d", &num) == 1; i++)
    {
        n=num+n;
    }
    fp=fopen("add.txt", "w");
    fprintf(fp,"Sum of digit is :%d", n);
    fclose(fp);
    return 0;
}

