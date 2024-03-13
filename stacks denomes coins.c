#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE];
int top;
int nc,denom;
int main()
{

  top=-1;
    scanf("%d",&nc);
    if(nc>0)
    {
            for(int i=0;i<nc;i++)
              {
        scanf("%d",&denom);
                if(denom==1 ||denom==2||denom==5 ||denom==10)
        push(denom);
               }

    printf("Coins in Stack are:\n");
    display();
        printf("\n");
        pop();

    }
    else
    {
        printf("No coins.\n");
    }


    return 0;
}

void push(int ele)
{
    if(top!=SIZE-1)
    {
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    int d1=0,d2=0,d5=0,d10=0;
    int ele;
    for(int i=0;i<nc;i++)
    {
    ele=stack[top];
    top--;
    if(ele==1)
        d1++;
    else if(ele==2)
        d2++;
    else if(ele==5)
        d5++;
    else if(ele==10)
        d10++;
    }
    printf("Denomination 1 coins: %d\n",d1);
    printf("Denomination 2 coins: %d\n",d2);
    printf("Denomination 5 coins: %d\n",d5);
    printf("Denomination 10 coins: %d\n",d10);

}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
