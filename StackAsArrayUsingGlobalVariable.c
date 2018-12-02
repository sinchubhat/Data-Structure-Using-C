//Program to insert ,delete and display using stack as arrays ( global variables )
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Stack_size 5
int top; //global variable
int item,s[5];
// c function to an push integer element onto the stack using global variables
void PUSH()
{
    if(top==Stack_size-1)
    {
        printf(" Stack is full \n");
        return;
    }
    top=top+1;
    s[top]=item;
    // instead of line 16,17 we can use s[++top]=item;
}
// c function for pop :delete an item from the top of the stack using global variable
int POP()
{
    int item_deleted;
    if(top==-1)
        return 0;
    item_deleted=s[top--];
    return item_deleted;
}
// c function to display the elements of the stack using global variable
void display()
{
    if(top==-1)
    {
        printf(" Stack is empty\n");
        return;
    }
    printf(" Elements of Stack are : ");
    for(int j=0;j<=top;j++)
    {
        printf("%d\n",s[j]);
    }
}
void main()
{
    int choice;
    top=-1;
    int item_deleted;
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
            PUSH();
            break;
            case 2: item_deleted=POP();
            if(item_deleted==0)
            {
                printf(" Stack is empty\n"); //underflow
            }
            else
                printf(" Item deleted is %d\n",item_deleted);
            break;
            case 3:display();
            break;
            case 4: exit(0);
        }// end of switch
    }//end of for loop
}// end of main

