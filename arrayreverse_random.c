#include <stdlib.h>
#include <stdio.h>

void rev(int a[100], int n)
{
    int i = 0, x;
    while (i < n / 2)
    {
        --n;
        x = a[i];
        a[i] = a[n];
        a[n] = x;
        i++;
    }

    FILE *fp;
    fp = fopen("array.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%d ", a[i]);
    }

    fclose(fp);
}
int main()
{
    int a[100], n;
    FILE *fp;
    fp = fopen("number.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file for reading\n");
        return 1;
    }

    n = 10;

    for (int i = 0; i < 10 && fscanf(fp, "%d", &a[i]) == 1; i++)
    {

    }
    fclose(fp);
    rev(a, n);
    return 0;
}



