/*#include<stdio.h>
void readmaxmin(int a[100],int n);

main()
{
    int n,a[100];
    printf("enter the size of array \n");
    scanf("%d",&n);
    readmaxmin(a,n);
}
void readmaxmin(int a[100],int n)
{

   /* for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i;

    printf("Random Numbers Are:\n");
   // a[i]=rand()%100+10;
    for(i=0;i<n;i++)
    {
        printf("%d\n",rand()%100+10);
    }
    a[i]=rand()%100+10;
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
    }
    printf("max num is %d\n",max);
    printf("min num is %d",min);
}*/
#include<stdio.h>
#include<stdlib.h>

void readmaxmin(int a[100], int n);

int main()
{
    int n, a[100];
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    readmaxmin(a, n);

    return 0;
}

void readmaxmin(int a[100], int n)
{
    int i;

    printf("Random Numbers Are:\n");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 10;
        printf("%d\n", a[i]);
    }

    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max num is %d\n", max);
    printf("Min num is %d", min);
}

