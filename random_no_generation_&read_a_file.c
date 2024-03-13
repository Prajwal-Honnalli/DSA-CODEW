#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("number.txt", "r");

    int num,i;
    for (i=0;i<5 && fscanf(fp, "%d", &num) == 1; i++)
    {
        printf("%d ", num);
    }
    fclose(fp);
    return 0;
}

