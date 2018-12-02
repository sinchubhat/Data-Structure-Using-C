#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *l_link;
     struct node *r_link;
     };
     typedef struct node *NODE;

NODE getnode()
{
     NODE x;
      x=(NODE)malloc(sizeof(struct node));
       if(x==NULL)
        {
                 printf("out of memory\n");
       exit(0);
       }
            return x;
}

void freenode(NODE x)
{
     free(x);
}

 NODE insert_rear(NODE head,int item)
 {
     NODE temp,cur;
     temp=getnode();
      temp->info=item;
       cur=head->l_link;
        cur->r_link=temp;
         temp->l_link=cur;
         temp->r_link=head;
          head->l_link=temp;
          return head;
}

NODE delete_front(NODE head)
{
     NODE temp,cur;
      temp=head->r_link;
       if(head->l_link==head && head->r_link==head)
        {
               printf("List is empty,hence cannot delete item\n");
       return head;} if(temp->r_link==head)
       {
            head->r_link=head;
         head->l_link=head;
            printf("%d deleted from list\n",temp->info);
         freenode(temp);return head;
         }
         cur=temp->r_link;
          head->r_link=cur;
           cur->l_link=head;
            printf("%d deleted from list\n",temp->info);
            freenode(temp);
            return head;
            }

void display(NODE head)
{
       NODE temp;
           temp=head->r_link;
           if(head->r_link==head)
            {
                 printf("List is empty\n");
           return;
           }
            printf("Contents of list are:\n");
            while(temp!=head)
                {
                      printf("%d ",temp->info);
            temp=temp->r_link;}
                printf("\n");
                }

int main()
{
    int choice,item;
     NODE head;
     head=getnode();
     head->l_link=head;
     head->r_link=head;
      while(1)
        {
            printf("Enter 1 to insert item at rear\nEnter 2 to delete at front\nEnter 3 to display\nEnter any other key to exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter item to be inserted\n");
          scanf("%d",&item);
           head=insert_rear(head,item);
           break;
           case 2:head=delete_front(head);break;
           case 3:display(head);
             break;
             default:exit(0);
       }
        }
}


