#include<stdio.h>
#include<ctype.h>
#define SIZE 50
char input[SIZE];
char stack[SIZE];
void push(char);
char pop();
int top;
void balanced_parathesis(char []);

main()
{
top=-1;

printf("enter an input expression\n");
scanf("%s",input);
balanced_parathesis(input);
}

void balanced_parathesis(char input[SIZE])
{
int balanced=1;
int i=0;
char symbol,ch;
while(input[i]!='\0')
{
     symbol=input[i];
     if(symbol=='(' || symbol=='{'|| symbol=='[')
     {
       push(symbol);
     }
     else if(symbol==')' || symbol=='}'|| symbol==']')
     {
          if(top!=-1)
          {
              ch=pop();
              if(ch=='(' && symbol!=')')
              {
                  balanced=0;
                  break;
              }
              else if(ch=='{' && symbol!='}')
                {
                     balanced=0;
                  break;
                }
                else if(ch=='[' && symbol!=']')
                {
                      balanced=0;
                  break;
                }

          }

          else
          {
          balanced=0;
          break;
          }
      }

     i++;
}
if(top==-1 && balanced==1)

       printf("it is balaced paranthesis expression\n");
else
     printf("it is not a balaced paranthesis expression\n");




}


void push(char ch)
{
    if(top!=SIZE-1)
    {
        top++;
        stack[top]=ch;
    }
}

char pop()
{
    char ch;
    float number;
    if(top!=-1)
    {
         ch=stack[top];
         top--;
         return(ch);

    }
}

