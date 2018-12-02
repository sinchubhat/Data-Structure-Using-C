#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<alloc.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;

// c function to get a node from the available list
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf(" OUT OF MEMORY \n");
        exit(0);
    }
    return x;
}

// c function to deallocate or free a node
void freenode(NODE x)
{
    free(x);
}

// c function to insert an item at the rear end of the list
NODE insert_rear(int item,NODE first)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

// c function to delete an item from the rear end of the list
NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first==NULL)
    {
        printf(" List is empty and cannot be deleted\n");
        return first;
    }
    if(first->link=NULL)
    {
        printf(" Item to be deleted is %d\n",first->info);
        freenode(first);
        return NULL; //list is empty
    }
    prev=NULL;
    cur=first;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf(" Item deleted is %d\n",cur->info);
    freenode(cur);
    prev->link=NULL;
        return first;
}

// c function to display the contents of singly linked list
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf(" List is empty \n");
        return;
    }
    printf(" The contents of the list are : \n");
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->info);
        temp=temp->link;
    }
    printf("\n");
}

// main
void main()
{
    NODE first=NULL; //to start,list is empty
    int choice,item;
    int q[5];
    for(;;)
    {
        printf(" 1.Insert at rear end 2.Delete at rear end \n");
        printf(" 3.Display 4.Quit \n");
        printf(" Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf(" Enter item to be inserted\n");
                   scanf("%d",&item);
                   first=insert_rear(item,first);
                   break;
            case 2:first=delete_rear(first);
                   break;
            case 3:display(first);
                   break;
            default:exit(0);
        }//end of switch
    }//end of for loop
}//end of main

