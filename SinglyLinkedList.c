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

// c function to insert a node at the front end of the list
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
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
    for(;;)
    {
        printf(" 1.Insert at front end 2.Display 3.Quit \n");
        printf(" Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf(" Enter item to be inserted\n");
                   scanf("%d",&item);
                   first=insert_front(item,first);
                   break;
            case 2:display(first);
                   break;
            default:exit(0);
        }//end of switch
    }//end of for loop
}//end of main


