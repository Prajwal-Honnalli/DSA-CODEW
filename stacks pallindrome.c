#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[10];
int push(int n,int top);
void display(int top);
int is_palandrome(int top);
int dig,v,c,t;
int main()
{
    int n,top=-1;

    scanf("%d",&n);
    if(n>0)
    {
        top=push(n,top);
    printf("Stack with digits is:\n");
    display(top);
    t=is_palandrome(top);
    printf("\n");
      if(t==1)
      {
          printf("%d is a palindrome integer.",n);
      }
    else
    {
        printf("%d is not a palindrome integer.",n);
    }

    }
    else
    {
        printf("Invalid input.");
    }

    return 0;
}
int push(int n,int top)
{
    if(top==9)
    {
        printf("Stack Full.");
    }
    else
    {

        while(n!=0)
        {   top++;
            dig=n%10;
            n=n/10;
            stack[top]=dig;
        }
    }
    return(top);
}
void display(int top)
{
    int i;
    if(top==-1)
    {
        printf("Stack Empty.");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int is_palandrome(int top)
{
    int i,j=0,t=0;
    for(i=top;i>=0;i--)
    {    for(j=0;j<=top;j++)
    {
        if(stack[i]==stack[j])
        {
            t=1;

        }
        else
        {
            t=0;
            break;
        }
        i--;
    }

    }
    return(t);

}
