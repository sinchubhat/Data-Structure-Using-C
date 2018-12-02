#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Queue_size 5
int choice,item,f,r,q[5],count;
// c function to insert an integer item  at rear using global variables
void insert_rear()
{
    if(count==Queue_size)
    {
        printf(" Queue overflow \n");
        return;
    }
    r=(r+1)%Queue_size;
    q[r]=item;
    count++;
}
// c function to delete an integer item from front using global variable
void delete_front()
{
    if(count==0)
    {
        printf(" Queue is empty \n"); //underflow
        return;
    }
    printf(" Item deleted from queue %d\n",q[f]);
    f=(f+1)%Queue_size;
    count--;
}
// c function to display queue contents using global variables
void display()
{
    int i;
    if(count==0)
    {
        printf(" Queue is empty\n");
        return;
    }
    printf(" The contents of queue are \n");
    for(i=0;i<count;i++)
    {
      printf("%d\n",q[f]);
      f=(f+1)%Queue_size;
    }
}

void main()
{
    f=0;
    r=-1;
    count=0;
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


