#include<stdio.h>
struct song
{
   struct song *prev;
   char tit[30];
   char s_name[30];
   float dur;
   struct song *next;
};

struct song* insert_song_front(struct song *,struct song *);
struct song* insert_song_end(struct song *,struct song *);
struct song* delete_song_front(struct song *);
struct song* delete_song_end(struct song *);
void display_song_forward(struct song*);
void display_song_backward(struct song*);
struct song* search_for_node(struct song*);
struct song* search_for_title(struct song*);
struct song* delete_at_pos(struct song*,int pos);
struct song* insert_at_pos_by_s_name(struct song*);
struct song* insert_before_pos_by_s_name(struct song*);
int count_node(struct song *head);
struct song* insert_at_pos(struct song *head, struct song *ptr,int pos);

struct song *head,*start,*temp,*cur,*ptr,*last;
int count,pos,z=0;
main()
{
   int ch;
   head=NULL;
   do
   {
   printf("1--insert a song at front\n");
   printf("2--insert a song at end\n");
   printf("3--delete a song at front\n");
   printf("4--delete a song at end\n");
   printf("5--display all songs forward\n");
    printf("6--display all songs backward\n");
    printf("7--COUNT THE NODES\n");
   printf("8--INSERT A SONG AT POSITION\n");
    printf("9--DELETE A SONG AT POSITION\n");
    printf("10--SEARCH FOR A SONG by author\n");
    printf("11--SEARCH FOR A SONG by title\n");
    printf("12--INSERT A SONG AT POS BY AUTHOR\n");
   printf("13--INSERT A NODE BEFORE POS BY AUTHOR\n");

    printf("14--EXIT\n");


   printf("enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1: ptr=(struct song*)malloc(sizeof(struct song));
                     printf("enter title, singer name and duration\n");
                     scanf("%s%s%f",&ptr->tit, &ptr->s_name,&ptr->dur);
                     head=insert_song_front(head,ptr);
                     break;
     case 2: ptr=(struct song*)malloc(sizeof(struct song));
                     printf("enter title, singer name and duration\n");
                     scanf("%s%s%f",&ptr->tit, &ptr->s_name,&ptr->dur);
                     head=insert_song_end(head,ptr);
                     break;
    case 3: if(head==NULL)
                      printf("no songs to delete\n");
                      else
                      {
                          head=delete_song_front(head);
                      }
                      break;
    case 4:  if(head==NULL)
                      printf("no songs to delete\n");
                      else
                      {
                          head=delete_song_end(head);
                      }
                      break;
    case 5: if(head==NULL)
                      printf("no songs to display\n");
                      else
                      {
                          display_song_forward(head);
                      }
                      break;
    case 6: if(head==NULL)
                      printf("no songs to display\n");
                      else
                      {
                          display_song_backward(head);
                      }
                      break;
    case 7:
        count=count_node(head);
                    printf("number of node=%d\n",count);
                    break;
    case 8: printf("enter the position\n");
                     scanf("%s",&pos);
                     if(pos<1 || pos>count_node(head)+1)
                        printf("inavalid position\n");
                     else
                     {
                         ptr=(struct song*)malloc(sizeof(struct song));
                        printf("enter name rollno and height of song\n");
                        scanf("%s%s%f",&ptr->tit,&ptr->s_name,&ptr->dur);
                          if(pos==1)
                         {
                             head=insert_song_front(head,ptr);
                         }
                         else if(pos==count_node(head)+1)
                         {
                             head=insert_song_end(head,ptr);
                         }
                         else
                         {
                             head=insert_at_pos(head,ptr,pos);
                         }
                     }

                    break;
    case 9: printf("enter the position\n");
                     scanf("%d",&pos);
                     if(pos<1 || pos>count_node(head))
                        printf("inavalid position\n");
                     else
                     {

                          if(pos==1)
                         {
                             head=delete_song_front(head);
                         }
                         else if(pos==count_node(head))
                         {
                             head=delete_song_end(head);
                         }
                         else
                         {
                             head=delete_at_pos(head,pos);
                         }
                     }

                    break;
    case 10:if(head==NULL)
                    {
                        printf("SLL is empty\n");
                    }
                    else
                        {
                        head=search_for_node(head);
                        }
                      break;
    case 11:if(head==NULL)
                    {
                        printf("SLL is empty\n");
                    }
                    else
                        {
                        head=search_for_title(head);
                        }
                      break;

    case 12: if(head==NULL)
                    {
                        printf("SLL is empty\n");
                    }
                    else
                        {
                        head=insert_at_pos_by_s_name(head);
                        }
                      break;

    case 13:if(head==NULL)
                    {
                        printf("SLL is empty\n");
                    }
                    else
                        {
                        head=insert_before_pos_by_s_name(head);
                        }
                      break;
    case 14:exit(0);break;
    default:printf("Invalid choice\n");break;
   }
}while(ch!=14);
}

struct song* insert_song_front(struct song *head, struct song *ptr)
{
   if(head==NULL)
   {
     head=ptr;
     head->next=head;
     head->prev=head;
   }
   else
   {
      ptr->next=head;
      last=head->prev;
      head->prev=ptr;
      ptr->prev=last;
      last->next=ptr;
      head=ptr;
   }
    return(head);
}

struct song* insert_song_end(struct song *head, struct song *ptr)
{

  if(head==NULL)
   {
     head=ptr;
     head->next=head;
     head->prev=head;
   }

   else
   {
       start=head;
       while(start->next!=head)
       {
          start=start->next;
       }

       start->next=ptr;
       ptr->prev=start;
       ptr->next=head;
       head->prev=ptr;

   }
   return(head);
}

struct song* delete_song_front(struct song *head)
{
    if(head->next==head)
    {
       printf("song deleted\n");
       printf("title=%s\t singer name=%s\t duration=%f\n",head->tit, head->s_name, head->dur);
       free(head);
       head=NULL;
    }
    else
    {
        cur=head;
        printf("song deleted\n");
       printf("title=%s\t singer name=%s\t duration=%f\n",cur->tit, cur->s_name, cur->dur);
       last=head->prev;
       head=head->next;
       free(cur);
       head->prev=last;
       last->next=head;
    }
    return(head);
}


struct song* delete_song_end(struct song *head)
{
    if(head->next==head)
    {
       printf("song deleted\n");
       printf("title=%s\t singer name=%s\t duration=%f\n",head->tit, head->s_name, head->dur);
       free(head);
       head=NULL;
    }

    else
    {
        start=head;
        while(start->next!=head)
        {
            start=start->next;
        }
        printf("song deleted\n");
       printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
       last=start->prev;
        start->prev->next=head;
        head->prev=last;
        free(start);
    }
    return(head);
}




void display_song_forward(struct song *head)
{
    start=head;
    printf("the songs are\n");
    while(start->next!=head)
    {
         printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
         start=start->next;
    }
     printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
}


void display_song_backward(struct song *head)
{
    start=head;
    printf("the songs are\n");
    while(start->next!=head)
    {
        start=start->next;
    }
    while(start!=head)
    {
         printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
         start=start->prev;
    }
     printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
}


int count_node(struct song *head)
{
     int c=0;
        struct song *start;
    if(head==NULL)
       return(c);
    else
    {
        start=head;
        while(start->next!=head)
        {
            c++;
            start=start->next;
        }
        c++;
        return(c);
    }

}

struct song* insert_at_pos(struct song *head, struct song *ptr,int pos)
{
    int p=1;
    struct song *start,*temp;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->next;
        p++;
    }
    temp->next=ptr;
    ptr->prev=temp;
    ptr->next=start;
    start->prev=ptr;
    return(head);
};
struct song* delete_at_pos(struct song *head,int pos)
{
 int p=1;
 struct song *start,*temp,*cur;
    start=head;
    while(p!=pos)
    {
        temp=start;
        start=start->next;
        p++;
    }
    cur=start->next;
    temp->next=start->next;
    cur->prev=temp;
    printf("song deleted is\n");
           printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
          free(start);
    return(head);

}
struct song* search_for_node(struct song *head)
{
    char t[30];
    struct song *start;
    start=head;
    printf("Enter a author of song\n ");
    scanf("%s",&t);
    while(start->next!=head)
    {
        if(strcmp(start->s_name,t)==0)
        {
         printf("song detailes are\n");
           printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
          break;
        }
        start=start->next;
    }
    do
    {
     if(strcmp(start->s_name,t)==0)
        {
         printf("song detailes are\n");
           printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
          break;
        }
    else
    {
        printf("song detailes not found\n");
    }

    }while(z!=0);
    return(head);
}
struct song* search_for_title(struct song *head)
{
  char p[30];
    struct song *start;
    start=head;
    printf("Enter a title of song\n ");
    scanf("%s",&p);
    while(start->next!=head)
    {
        if(strcmp(start->tit,p)==0)
        {
         printf("song detailes are\n");
           printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
          break;
        }
        start=start->next;
    }
    do
    {
     if(strcmp(start->tit,p)==0)
        {
         printf("song detailes are\n");
           printf("title=%s\t singer name=%s\t duration=%f\n",start->tit, start->s_name, start->dur);
          break;
        }
    else
    {
        printf("song detailes not found\n");
    }
    }while(z!=0);
    return(head);
}

struct song* insert_at_pos_by_s_name(struct song *head)
{
  int r[30];
    struct song *start,*ptr;
    start=head;
    printf("Enter a author of song\n ");
    scanf("%s",&r);
    while(start->next!=head)
    {
        if(strcmp(start->s_name,r)==0)
        {
            ptr=(struct song*)malloc(sizeof(struct song));
         printf("enter song detailes are\n");
         printf("enter Title author and duration of song\n");
                        scanf("%s%s%f",&ptr->tit,&ptr->s_name,&ptr->dur);
                        ptr->next=start->next;
                        start->next->prev=ptr;
                        start->next=ptr;
                        ptr->prev=start;
          break;
        }
        start=start->next;
    }
    do
        {
     if(strcmp(start->s_name,r)==0)
        {
            ptr=(struct song*)malloc(sizeof(struct song));
         printf("enter song detailes are\n");
         printf("enter title author and duration of song\n");
                        scanf("%s%s%f",&ptr->tit,&ptr->s_name,&ptr->dur);
                        ptr->next=start->next;
                        start->next->prev=ptr;
                        start->next=ptr;
                        ptr->prev=start;
          break;
        }
    else
    {
        printf("song detailes not found cannot insert\n");
    }
        }while(z!=0);
    return(head);
}
struct song* insert_before_pos_by_s_name(struct song *head)
{
  char r[30];
    struct song *start,*ptr,*cur;
    start=head;
    printf("Enter a author of song\n ");
    scanf("%s",&r);
    while(start->next!=head)
    {

        if(strcmp(start->s_name,r)==0)
        {
            ptr=(struct song*)malloc(sizeof(struct song));
         printf("enter song detailes \n");
         printf("enter title,author and duration of song\n");
                        scanf("%s%s%f",&ptr->tit,&ptr->s_name,&ptr->dur);
                        cur->next=ptr;
                        ptr->prev=cur;
                        ptr->next=start;
                        start->prev=ptr;
          break;
        }
        cur=start;
        start=start->next;
    }
    do
    {
    if(strcmp(start->s_name,r)==0)
        {
            ptr=(struct song*)malloc(sizeof(struct song));
         printf("enter song detailes \n");
         printf("enter title,author and duration of song\n");
                        scanf("%s%s%f",&ptr->tit,&ptr->s_name,&ptr->dur);
                        cur->next=ptr;
                        ptr->prev=cur;
                        ptr->next=start;
                        start->prev=ptr;
          break;
        }
    else
    {
        printf("song detailes not found cannot insert\n");
    }
    }while(z!=0);
    return(head);
}

