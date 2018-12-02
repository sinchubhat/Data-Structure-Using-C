#include<stdio.h> #include<conio.h> #include<malloc.h> #include<stdlib.h>

struct node
{
    int info;
     struct node *link;
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

void freenode(NODE x){ free(x);}

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


NODE delete_pos(NODE head,int pos)
{
int c=1;
 if(head->link==head)
    {
         printf("List is empty,hence cannot delete item at position %d\n",pos);
 return head;
    }
  NODE temp,prev;
  prev=head;
  temp=head->link;
   if(pos==1 && temp->link==head)
    {
         head->link=head;
   printf("%d deleted from list\n",temp->info);
   freenode(temp);
   return head;
   }
   while(c!=pos && temp->link!=head)
    {
             temp=temp->link;
             prev=prev->link;
c++;
} if(c==pos){     prev->link=temp->link;
     printf("%d deleted from list\n",temp->info);freenode(temp);
     return head;}
      if(temp->link==head)
        {
             printf("No item exist at position %d\n",pos);
      return head;
      }
}

void display(NODE head){ NODE temp=head; if (head->link==head){     printf("List is empty\n");     return;} printf("contents of List:\n"); temp=head->link; while(temp!=head){     printf("%d ",temp->info);     temp=temp->link;}     printf("\n");}


int main()
{ int choice,item,pos;
 NODE head;
 head=getnode();
 head->link=head;
  while(1){
        printf("Enter 1 to insert item at front\nEnter 2 to insert item at rear\nEnter 3 to delete\nEnter 4 to display list\nEnter any other key to exit\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:printf("Enter item to be inserted\n");        scanf("%d",&item);        head=insert_front(head,item);break;
     case 2:printf("Enter item to be inserted\n");        scanf("%d",&item);        head=insert_rear(head,item);break;
      case 3:printf("Enter position where item to be deleted\n");        scanf("%d",&pos);        head=delete_pos(head,pos);break;
case 4:display(head);        break;
 default:exit(0);
 }
 }
 }
