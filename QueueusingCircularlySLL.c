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


NODE insert_rear(int item,NODE last)
{
    NODE temp;
     temp=getnode();
     temp->info=item;
     temp->link=NULL;
      if(last==NULL)
        {
                 temp->link=temp;
      return temp;
      }
      else{
                temp->link=last->link;
         last->link=temp;
            return temp;
      }
      }

NODE delete_front(NODE last){
    NODE temp;
    if(last==NULL){
            printf("Queue is empty,Can't delete an item\n");
  return last;}
  if(last->link==last){     printf("%d deleted from queue\n",last->info);     freenode(last);     return NULL;}
  temp=last->link;
   last->link=temp->link;
    printf("%d deleted from queue\n",temp->info);
    freenode(temp);
     return last;}

void display(NODE last){
    NODE temp=last;
     if (last==NULL){     printf("Queue is empty\n");     return;}
     printf("contents of Queue:\n");
      temp=last->link;
      while(temp!=last){     printf("%d ",temp->info);     temp=temp->link;}
       printf("%d",temp->info);
          printf("\n");}

int main(){
    int item,choice;
     NODE last=NULL;
      while(1){
                printf("Enter 1 to insert element\nEnter 2 to delete element\nEnter 3 for display\nEnter any other key to exit\n");
      scanf("%d",&choice);
       switch(choice){
             case 1:printf("Enter item to be inserted\n");            scanf("%d",&item);            last=insert_rear(item,last);            break;
               case 2:last=delete_front(last);            break;
                   case 3:display(last);            break;
                     default:exit(0);}
                     }
            }
