#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Queue_size 5
//c function to insert an item at the correct place in priority
void insert_item(int *item,int q[],int *r)
{
    int x=*item;
    if(*r==Queue_size-1)
    {
        printf(" Queue is full\n");
        return;
    }
    //find appropriate position to make room for inserting an item based on priority

    while(((*r)>=0) && x<=q[*r])
    {
        q[(*r)+1]=q[*r];
        *r=*r-1;
    }
    q[(*r)+1]=x;
    *r=*r+1;
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
        printf(" 1.Insert 2.Delete 3.Display 4.Exit \n Enter choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf(" Enter item to be inserted\n");
                   scanf("%d",&item);
                   insert_item(&item,q,&r);
                   break;
            case 2:delete_front(q,&f,&r);
                   break;
            case 3:display(q,f,r);
                   break;
            default: exit(0);
        } // end of switch
    } // end of for loop
} //  end of main


