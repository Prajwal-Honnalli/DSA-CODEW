#include<stdio.h>
main()
{

    int a[10],n;
    int *p;
    p=&a;
    void add(int *p,int n);
    void read(int *p,int n);
    void display(int *p,int n);
    void max(int *p,int n);
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    read(p,n);
    p=&a;
    display(p,n);
    p=&a;
    add(p,n);
    p=&a;
    max(p,n);
}

void read(int *p,int n)
{
    int i;
    printf("enter the values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
p=p+1;

    }
}
void display(int *p,int n)
{
    int i;
    printf("the array values are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*p);
        p=p+1;
    }
}

void add(int *p,int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
        p=p+1;
    }
    printf("sum of array elements=%d\n",sum);
}
void max(int *p,int n)
{
    int m,i;
    m=*p;
    for(i=0;i<n;i++)
    {
        if(*p>m)
        {
            m=*p;
        }
        p=p+1;
    }
    printf("max in array is=%d\n",m);
}
