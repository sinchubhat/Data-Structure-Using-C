//Program to insert ,delete and display using stack as arrays by passing parameters( reference variables )
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Stack_size 5
// c function to an push integer element onto the stack using reference variables
void Push(int item,int *top,int s[])
{
    if((*top)==Stack_size-1)
    {
        printf(" Stack is full \n");
        return;
    }
    (*top)=(*top)+1;
    s[*top]=item;
    // instead of line 16,17 we can use s[++(*top)]=item;
}
// c function for pop :delete an item from the top of the stack using global variable
int Pop(int *top,int s[])
{
    int item_deleted;
    /* Stack underflow? */
    if(*top==-1)
        return 0;
        // obtain the top most element and change the position of top item
    item_deleted=s[(*top)--];
    // send the item deleted to the calling function
    return item_deleted;
}
// c function to display the elements of the stack
void Display(int top,int s[])
{
    if(top==-1) // underflow
    {
        printf(" Stack is empty\n");
        return;
    }
    // display contents of stack
    printf(" Elements of Stack are : ");
    for(int j=0;j<=top;j++)
    {
        printf("%d\n",s[j]);
    }
}
void main()
{
    int top,s[10],item,item_deleted;
    int choice;
    top=-1;
    for( ; ;)
    {
        printf(" 1: Push  2: Pop  \n");
        printf(" 3: Display  4: Exit  \n");
        printf(" Enter choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf(" Enter the item to be inserted \n");
            scanf("%d",&item);
            Push(item,&top,s);
            break;
            case 2: item_deleted=Pop(&top,s);
            if(item_deleted==0)
            {
                printf(" Stack is empty\n"); //underflow
            }
            else
                printf(" Item deleted is %d\n",item_deleted);
            break;
            case 3:Display(top,s);
            break;
            case 4: exit(0);
        }// end of switch
    }//end of for loop
}// end of main


