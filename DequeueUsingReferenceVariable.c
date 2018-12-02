#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Queue_size 5
// c function to insert an integer item at the front end using reference variables
void insert_front(int item,int *f,int *r,int q[])
{
    int x=item;
    if(*f==0 && *r==-1)
    {
        q[++(*r)]=x; //case 1: when queue is empty,item can be inserted at front end by incrementing r by 1 and then insert the item
        return;
    }
    if((*f)!=0)
    {
        q[--(*f)]=x; //case 2:some items are deleted
        return;
    }
    printf(" Insertion not possible \n"); //case 3:some items are inserted (not deleted)
}

// c function to insert an integer item  at rear using reference variables
void insert_rear(int item,int *r,int q[])
{
    int x=item;
    if(*r==Queue_size-1)
    {
        printf(" Queue overflow \n");
        return;
    }
    *r=*r+1;
    q[*r]=x;

}
// c function to delete an integer item from front using reference variable
void delete_front(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf(" Queue is empty \n"); //underflow
        return;
    }
    printf(" Item deleted from queue %d\n",q[(*f)++]);
    if(*f>*r)
    {
      *f=0;
    *r=-1;
    }
}
//after reading an item ,it may so happen that queue may be empty so immediately after deleting an element if q is empty initialize f=0 , r=-1

// c function to delete an integer item from rear end using reference variables
void delete_rear(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf("Queue is empty \n");
        return;
    }
    printf(" The element deleted is %d\n",q[(*r)--]);
    if(*f>*r)
    {
        *f=0;
        *r=-1;
    }
}

void display(int q[],int f,int r)
// c function to display queue contents using reference variables
{
    int i;
    if(f>r)
    {
        printf(" Queue is empty\n");
        return;
    }
    printf(" The contents of queue are \n");
    for(i=f;i<=r;i++)
    {
      printf("%d\n",q[i]);
    }

}
void main()
{
    int choice,item,f,r,q[5];
    f=0;
    r=-1;
    for(;;)
    {
        printf(" 1.Insert at rear 2.Insert at front \n 3.Delete at rear 4.Delete at front \n 5.Display 6.Exit \n Enter choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf(" Enter item to be inserted\n");
                   scanf("%d",&item);
                   insert_rear(item,&r,q);
                   break;
            case 2:printf(" Enter item to be inserted\n");
                   scanf("%d",&item);
                   insert_front(item,&f,&r,q);
                   break;
            case 3:delete_rear(q,&f,&r);
                   break;
            case 4:delete_front(q,&f,&r);
                   break;
            case 5:display(q,f,r);
                   break;
            default: exit(0);
        } // end of switch
    } // end of for loop
} //  end of main



