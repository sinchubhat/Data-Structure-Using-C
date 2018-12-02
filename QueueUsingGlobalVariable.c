#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Queue_size 5
int choice,item,f,r,q[5];
// c function to insert an integer item  at rear using global variables
void insert_rear()
{
    if(r==Queue_size-1)
    {
        printf(" Queue overflow \n");
        return;
    }
    r=r+1;
    q[r]=item;
     //line 13,14 can also be written as q[++r]=item;
}
// c function to delete an integer item from front using global variable
void delete_front()
{
    if(f>r)
    {
        printf(" Queue is empty \n"); //underflow
        return;
    }
    printf(" Item deleted from queue %d\n",q[f++]);
    if(f>r)
    {
      f=0;
    r=-1;
    }

}
//after reading an item ,it may so happen that queue may be empty so immediately after deleting an element if q is empty initialize f=0 , r=-1
// c function to display queue contents using global variables
void display()
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
                   insert_rear();
                   break;
            case 2:delete_front();
                   break;
            case 3:display();
                   break;
            default: exit(0);
        } // end of switch
    } // end of for loop
} //  end of main

