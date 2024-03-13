#include<stdio.h>
#define size 5
void insert(int ele);
int delete();
void display();
int queue[size];
int f,r;
main()
{
int ele,i;
f=-1;
r=-1;
int ch;
do
{
printf("1----INSERT\n");
printf("2----Delete\n");
printf("3----DISPLAY\n");
printf("4----EXIT\n");
printf("enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
 case 1 :
 if(r==(size-1))
 {
 printf("Queue is full\n");

 }
 else
 {

 if(f==-1&&r==-1)
 {
     printf("Enter the value\n");
 scanf("%d",&ele);
 f++;
 r++;
 queue[r]=ele;
 }
 else
 {
     printf("Enter the value\n");
 scanf("%d",&ele);
 r++;
 queue[r]=ele;
 }
 }
 break;

 case 2 :

 if(f==-1&&r==-1)
 {
 printf("Queue is empty\n");

 }
 else
 {
 if(f==r)
 {
 printf("element deleted is=%d\n",queue[f]);
 f=-1;
 r=-1;

 }
 else
 {
 printf("element deleted is=%d\n",queue[f]);
 f++;
 }
 }
 break;
case 3 : if(f==-1&&r==-1)
 {
 printf("Queue is empty\n");

 }
 else
 {
 for(i=f;i<=r;i++)
 {
 printf("%d\n",queue[i]);
 }
 printf("\n");
 }
 break;
case 4 :exit(0);break;

}

}while(ch!=4);
}
