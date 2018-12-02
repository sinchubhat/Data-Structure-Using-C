#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
     int info;
      struct node *link;
};
 typedef struct node *NODE;

NODE getnode()
{ NODE x;
 x=(NODE)malloc(sizeof(struct node));
 if(x==NULL){
            printf("out of memory\n");
 exit(0);}
    return x;
}

void freenode(NODE x)
{
     free(x);
     }

NODE insert_spec_pos(NODE head,int pos,int item){ int c=1;NODE temp,prev,cur; temp=getnode(); temp->info=item;temp->link=NULL; if(head->link==head && pos==1){     head->link=temp;temp->link=head;return head;} cur=head->link; prev=head; while(c!=pos && cur!=head){     cur=cur->link;     prev=prev->link;     c++;} if(cur==head){     printf("Insertion at position %d not possible\n",pos);return head;}
if(c==pos){     prev->link=temp;temp->link=cur;return head;}}

void display(NODE head)
{
     NODE temp=head;
     if (head->link==head){     printf("List is empty\n");     return;}
     printf("contents of List:\n");
     temp=head->link;
      while(temp!=head){
                printf("%d ",temp->info);
      temp=temp->link;}

    printf("\n");

}

int main()
{
     int choice,item,pos;
     NODE head;
      head=getnode();
      head->link=head;
while(1)
    {
         printf("Enter 1 to insert item\nEnter 2 to display\nEnter any other key to exit\n");
 scanf("%d",&choice);
  switch(choice){
       case 1: printf("Enter item to be inserted\n");
               scanf("%d",&item);
               printf("Enter position where %d should be inserted\n",item);
               scanf("%d",&pos);
               head=insert_spec_pos(head,pos,item);
               break;
       case 2: display(head);
               break;
       default: exit(0);
               }
    }
}
