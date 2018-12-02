#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
     int info;
      struct node *link;};
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

 NODE insert_front(NODE head,int item)
 {
      NODE temp;
      temp=getnode();
       temp->info=item;
       temp->link=NULL;
       temp->link=head->link;
        head->link=temp;
        return head;
}

NODE insert_rear(NODE head,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
     cur=head->link;
     while(cur->link!=head)
        {
            cur=cur->link;
     }
     cur->link=temp;
      temp->link=head;
      return head;
}

NODE delete_info(NODE head,int item)
{
     if(head->link==head)
        {
             printf("List is empty,hence %d not found\n",item);
     return head;}
     NODE temp,prev;
     prev=head;
     temp=head->link;
     if(temp->info==item && temp->link==head)
        {
              head->link=head;freenode(temp);
     printf("%d deleted from list\n",item);
     return head;
     }
      while(temp->info!=item && temp->link!=head)
        {
             temp=temp->link;
      prev=prev->link;
      }
      if(temp->info==item)
        {
             prev->link=temp->link;
         freenode(temp);
         printf("%d deleted from list\n",item);
         return head;
         }
         if(temp->link==head)
            {     printf("%d not found in list\n",item);
         return head;
         }
}

void display(NODE head){
    NODE temp=head;
    if (head->link==head){     printf("List is empty\n");     return;}
    printf("contents of List:\n");
     temp=head->link;
     while(temp!=head){     printf("%d ",temp->info);     temp=temp->link;}
        printf("\n"); }

int main(){ int choice,item; NODE head; head=getnode();head->link=head;
while(1){ printf("Enter 1 to insert item at front\nEnter 2 to insert item at rear\nEnter 3 to delete\nEnter 4 to display list\nEnter any other key to exit\n");
scanf("%d",&choice); switch(choice){
case 1:printf("Enter item to be inserted\n");        scanf("%d",&item);        head=insert_front(head,item);break;
case 2:printf("Enter item to be inserted\n");        scanf("%d",&item);        head=insert_rear(head,item);break;
case 3:printf("Enter item to be deleted\n");        scanf("%d",&item);        head=delete_info(head,item);break;
 case 4:display(head);
    break; default:exit(0);}}}
