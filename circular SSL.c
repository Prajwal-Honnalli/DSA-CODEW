#include<stdio.h>
#define NULL 0
struct student
{
  char name[30];
  int rno;
  float ht;
  struct student *link;
};

main()
{
struct student *head,*ptr;
head=NULL;
int ch,pos,count;
struct student* insert_at_front(struct student*,struct student *);
struct student* insert_at_end(struct student*,struct student *);
struct student* delete_at_front(struct student*);
struct student* delete_at_end(struct student*);
struct student* search_for_node(struct student*);
struct student* delete_at_pos(struct student*,int pos);
struct student* insert_at_pos(struct student *head, struct student *ptr,int pos);
void display_SLL(struct student*);
int count_node(struct student *head);

do
{
   printf("1--INSERT A NODE AT FRONT\n");
   printf("2--INSERT A NODE AT END\n");
   printf("3--DELETE A NODE AT FRONT\n");
   printf("4--DELETE A NODE AT END\n");
   printf("5--DISPLAY LINKED LIST\n");
   printf("6--DELETE A NODE AT POSITION\n");
    printf("7--SEARCH FOR A NODE\n");
    printf("9--COUNT THE NODES\n");
   printf("8--EXIT\n");
   printf("10--INSERT A NODE AT POSITION\n");

   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_front(head,ptr);
            break;
    case 2: ptr=(struct student*)malloc(sizeof(struct student));
            printf("enter name rollno and height of student\n");
            scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
            head=insert_at_end(head,ptr);
            break;
    case 3: if(head==NULL)
            printf("CSLL is empty\n");
            else
            {
               head=delete_at_front(head);
            }
            break;
    case 4:if(head==NULL)
            printf("CSLL is empty\n");
            else
            {
               head=delete_at_end(head);
            }
            break;
    case 5: if(head==NULL)
            printf("CSLL is empty\n");
            else
            {
              display_SLL(head);
            }
            break;
            case 6: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head))
                        printf("inavalid position\n");
                     else
                     {

                          if(pos==1)
                         {
                             head=delete_at_front(head);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=delete_at_end(head);
                         }
                         else
                         {
                             head=delete_at_pos(head,pos);
                         }
                     }

                    break;
                    case 7:if(head==NULL)
                    {
                        printf("SLL is empty\n");
                    }
                    else
                        {
                        head=search_for_node(head);
                        }
                      break;


    case 8: exit(0);break;
     case 9: count=count_node(head);
                    printf("number of node=%d\n",count);
                    break;
        case 10: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head)+1)
                        printf("inavalid position\n");
                     else
                     {
                         ptr=(struct student*)malloc(sizeof(struct student));
                        printf("enter name rollno and height of student\n");
                        scanf("%s%d%f",&ptr->name,&ptr->rno,&ptr->ht);
                          if(pos==1)
                         {
                             head=insert_at_front(head,ptr);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=insert_at_end(head,ptr);
                         }
                         else
                         {
                             head=insert_at_pos(head,ptr,pos);
                         }
                     }

                    break;

    default:printf("Invalid choice\n");break;
   }
}while(ch!=8);
}

struct student* insert_at_front(struct student *head, struct student *ptr)
{
    struct student *start,*cur;
    if(head==NULL)
    {
       head=ptr;
       ptr->link=head;
    }
    else
    {
       start=head;
       while(start->link!=head)
       {
           start=start->link;
       }
       ptr->link=head;
       start->link=ptr;
       head=ptr;
    }
    return(head);
}

struct student* insert_at_end(struct student *head, struct student *ptr)
{
    struct student *start;
    if(head==NULL)
    {
       head=ptr;
       ptr->link=head;
    }
    else
    {
      start=head;
      while(start->link!=head)
      {
         start=start->link;
      }
      start->link=ptr;
      ptr->link=head;
    }
    return(head);
}

struct student* delete_at_front(struct student *head)
{
   struct student *start,*cur;
      if(head->link==head)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
         start=head;
         while(start->link!=head)
         {
             start=start->link;
         }
           printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          cur=head->link;
          free(head);
          start->link=cur;
          head=cur;
      }
      return(head);

}


struct student* delete_at_end(struct student *head)
{
    struct student *start,*cur;
      if(head->link==head)
      {
          printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",head->name,head->rno,head->ht);
          free(head);
          head=NULL;
      }
      else
      {
          start=head;
      while(start->link!=head)
      {
          cur=start;
         start=start->link;
      }
        printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          free(start);
          cur->link=head;
      }
      return(head);

}

void display_SLL(struct student *head)
{
   struct student *start;
   start=head;
   while(start->link!=head)
   {
       printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
       start=start->link;
   }
     printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);

}
struct student* delete_at_pos(struct student *head,int pos)
{
 int p=1;
 struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=start->link;
    printf("student deleted is\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          free(start);
    return(head);

}
struct student* search_for_node(struct student *head)
{
    int r;
    struct student *start;
    start=head;
    printf("Enter a roll number of student\n ");
    scanf("%d",&r);
    while(start->link!=head)
    {
        if(start->rno==r)
        {
         printf("student detailes are\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);
          break;
        }
        start=start->link;
    }
        if(start->rno==r)
        {
         printf("student detailes are\n");
          printf("name=%s\t rollno=%d\t height=%f\n",start->name,start->rno,start->ht);

        }
    if(start->link==head)
    {
        printf("student detailes not found\n");
    }
    return(head);
};
int count_node(struct student *head)
{
     int c=0;
        struct student *start;
    if(head==NULL)
       return(c);
    else
    {
        c++;
        start=head;
        while(start->link!=head)
        {
            c++;
            start=start->link;
        }
        return(c);
    }

}
struct student* insert_at_pos(struct student *head, struct student *ptr,int pos)
{
    int p=1;
    struct student *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->link;
        p++;
    }
    temp->link=ptr;
    ptr->link=start;
    return(head);
};
