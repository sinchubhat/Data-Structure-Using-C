#include<stdio.h>
#include<conio.h>
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
        printf(" OUT OF MEMORY \n");
        exit(0);
    }
    return x;
}

void freenode(NODE x)
{
    free(x);
}

void Display(NODE head)
{
    NODE temp;
    if(head->link==head)
    {
        printf(" List is empty \n");
        return head;
    }
    printf(" Contents of the list are \n");
    temp=head->link; // address of first node
    while(temp!=head)
    {
        printf("%d",temp->info);
        temp=temp->link;
    }
    printf("\n");
}

NODE insert_rear(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode(); // create a node
    temp->info=item;
    cur=head->link; // address of first node
    while(cur->link!=head)
    {
        cur=cur->link;
    }
    cur->link=temp;
    temp->link=head;
    return head;
}

NODE delete_front(NODE head)
{
    NODE temp;
    if(head->link==head)
    {
        printf(" List is empty \n");
        return NULL;
    }
    temp=head->link; // address of first node
    head->link=temp->link;
    printf(" Item deleted is %d \n",temp->info);
    freenode(temp);
    return head;
}

void main()
{
    NODE head;
    int choice,item;
    head=getnode();
    head->info=0;
    head->link=head;
    for(;;)
    {
        printf(" 1: delete front 2: insert rear \n");
        printf(" 3: display 4: exit \n");
        printf(" Enter choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=delete_front(head);
                   break;
            case 2:printf(" Enter the item to be inserted \n ");
                   scanf("%d",&item);
                   head=insert_rear(item,head);
                   break;
            case 3:Display(head);
                   break;
            default: exit(0);
        }
    }
}
