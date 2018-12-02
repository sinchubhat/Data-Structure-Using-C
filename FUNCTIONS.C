// Stacks
// 0a. c function to push an integer element onto the stack using global variables
// 0b. c function to delete an element from the top of the stack using global variables
// 0c. c function to display the elements of the stack using global variables
// 0d. c function to push an item onto stack using reference variables
// 0e. c function to pop an item from stack using reference variables
// 0f. c function to display the contents of stack using reference variables
// 0g. c function which returns stack precedence values for Conversion of infix to postfix expression (single digit)
// 0h. c function to convert infix to postfix
// 0i. c function which returns stack precedence values for conversion of infix to prefix expression (single digit)

// Queues
// 0j. c function to insert an integer item at the rear end of queue using global variables
// 0k. c function to insert an integer item at the rear end of queue using reference variables(parameters)
// 0l. c function to delete an integer item at the front end of queue using global variables
// 0m. c function to delete an integer item at the front end of queue using reference variables
// 0n. c function to display contents of queue using global variables
// 0o. c function to display contents of queue using parameters

// Double Ended Queue (Dequeue)
// 0p. c function to insert an item at the front end of Double Ended Queue (Dequeue) using global variables
// 0q. c function to delete from rear end of queue using global variables

// Circular Queue
// 0r. c function to insert at the rear end of a circular queue by passing parameters
// 0s. c function to insert at the rear end of a circular queue by using global variables
// 0t. c function to delete at the front end of a circular queue by passing parameters
// 0u. c function to delete at the front end of a circular queue by using global variables
// 0v. c function to display the contents of circular queue by passing parameters
// 0w. c function to display the contents of circular queue by using global variables

// Priority Queue
// 0x. c function to insert an item at the correct place in priority

// Linked List
// a. Node: defined as structure
// b. c function to get node from Available list
// c. c function to free node

// Singly Linked List (SLL)
// d. c function to insert a node at the front end of a SLL
// e. c function to display the contents of a SLL
// f. c function to delete a node/item from the front end of a SLL
// g. c function to insert an item at the rear end of SLL
// h. c function to delete a node/item from the rear end of SLL

// Orderly Linked List
// 1. c function to create an orderly linked list

// Singly Linked List (SLL)
// 2. c function to search for a key in the list
// 3. c function to delete a node whose information field is specified
// 4. c function to delete the node from the specified position
// 5. c function to concatenate two lists
// 6. c function to reverse a list without creating a new node
// 7. c function to insert an item at the specified position
// 1 - 7 function is for Singly Linked List

// Circularly Singly Linked List CSLL
// 8. c function to insert a node at the front end of CSLL
// 9. c function to insert a node at the rear end of CSLL
// 10. c function to delete a node at the front end of CSLL
// 11. c function to delete a node from the rear end of CSLL
// 12. c function to display the contents of the CSLL
// 13. c function to insert a node at the front end using header node of a CSLL
// 14. c function to insert a node at the rear end using header node of a CSLL
// 15. c function to delete the node whose item is specified of CSLL using header node
// 16. c function to delete a node at the front end of CSLL using header node
// 17. c function to delete a node at the rear end of CSLL using header node
// 18. c function to insert a node at the specified position of CSLL using header node
// 19. c function to delete a node from the specified position of CSLL using header node
// 20. c function to display contents of CSLL with header node

// Doubly Linked List
// 21. Structure to define Doubly Linked List (DLL)
// 22. c function to insert a node at the front end of DLL using header node
// 23. c function to insert a node at rear end of DLL using header node
// 24. c function to delete a node from the front end of DLL using header node
// 25. c function to delete a node from the rear end of DLL using header node
// 26. c function to delete a node whose information field (item) is specified of DLL using Header node
// 27. c function to delete all nodes whose information field is specified using DLL with header node

// Applications of Linked List : CSLL with Header node
// 1] Arithmetic operations on long positive numbers
// a)
// 28. c function to read a long positive number

// 0a. c function to push an integer element onto the stack using global variables
void PUSH()
{
    if(top==Stack_size-1) // overflow
    {
        printf(" Stack is full \n");
        return;
    }
    top=top+1;  // or s[++top]=item;
    s[top]=item;
}

// 0b. c function to delete an element from the top of the stack using global variables
int POP()
{
    int item_deleted;
    if(top==-1) // underflow
    {
        return 0;
    }
    item_deleted = s[top--];
    return item_deleted;
}

// 0c. c function to display the elements of the stack using global variables
void display()
{
    if(top==-1)
    {
        printf(" Stack is empty \n"); // underflow
        return;
    }
    printf(" Elements of Stack are \n");
    for(int j=0;j<=top;j++)
    {
        printf("%d\n",s[j]); // s is the stack (array)
    }
}

// 0d. c function to push an item onto stack using reference variables
void PUSH(int item,int *top,int s[])
{
    if(*top==Stack_size-1) // overflow
    {
        printf(" Stack is full \n");
        return;
    }
    *top=*top+1;  // or s[++top]=item;
    s[*top]=item;
}

// 0e. c function to pop an item from stack using reference variables
int POP(int *top,int s[])
{
    int item_deleted;
    if(*top==-1) // underflow
    {
        return 0;
    }
    item_deleted = s[(*top)--]; // obtain the top most element and change the position of top item
    return item_deleted;
}

// 0f. c function to display the contents of stack using reference variables
void display(int top,int s[])
{
    if(top==-1)
    {
        printf(" Stack is empty \n"); // underflow
        return;
        printf("%d\n",s[j]); // s is the stack (array)
    }
}

// 0g. c function which returns stack precedence values for Conversion of infix to postfix expression (single digit)
// Function F contains the precedence values of the symbols on top of the stack
int F(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':return 2;
    case '*':
    case '/':return 4;
    case '$':
    case '^':return 5;
    case '(':return 0;
    case '#':return -1;
    default: return 8; // break not required as return statement is there
    }
}

// Function G contains the precedence values of symbols in the input string
int G(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 3;
    case '$':
    case '^':return 6;
    case '(':return 9;
    case ')':return 0;
    default: return 7; // break not required as return statement is there
    }
}

// 0h. c function to convert infix to postfix
void infix_Postfix(char infix[],char postfix[])
{
    int top;
    int i,j;
    char s[30];
    char symbol;
    top=-1;
    s[++top]='#';
    j=0;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        while(F(s[top])>G(symbol)) // as long as precedence value of the symbol on top of the stack is greater than the precedence value of the current input symbol,pop an item from the stack and place it in the postfix expression
        {
            Postfix[j++]=s[top--]; // pop an item from stack and place it in postfix
        }
        if(F(s[top])!=G(symbol)) // once the condition in while loop fails and if the precedence of the symbol on top of the stack is not equal to the precedence values of the current input symbol push the current symbol onto the stack otherwise delete an item from the stack but do not place it in the postfix expression
        {
            s[++top]=symbol;
        }
        else
        {
            top--;
        }
    }
    while(s[top]!='#')
    {
        Postfix[j++]=s[top--];
    }
    Postfix[j]='\0';
}

// 0i. c function which returns stack precedence values for conversion of infix to prefix
// Function F contains the precedence values of the symbols on top of the stack
int F(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 3;
    case '$':
    case '^':return 6;
    case ')':return 0;
    case '#':return -1;
    default: return 8;// operands is default // break not required as return statement is there
    }
}

// Function G contains the precedence values of symbols in the input string
int G(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':return 2;
    case '*':
    case '/':return 4;
    case '$':
    case '^':return 3;
    case '(':return 0;
    case ')':return 9;
    default: return 7; // break not required as return statement is there
    }
}
// conversion of infix to prefix
/* write function for F and G .Reverse the infix expression and follow the same procedure to convert infix to postfix .Prefix expression is obtained by reversing the result */

// 0j. c function to insert an integer item at the rear end of queue using global variables
void insert_rear()
{
    int item;
    if(r==Queue_size-1)
    {
        printf(" Queue overflow \n");
        return;
    }
    r=r+1;
    q[r]=item; // or q[++r]=item;
}

// 0k. c function to insert an integer item at the rear end of queue using reference variables(parameters)
void insert_rear(int item,int *r,q[])
{
    if(*r==Queue_size-1)
    {
        printf(" Queue overflow \n");
        return;
    }
    *r=*r+1;
    q[*r]=item; // or q[++(*r)]=item;
}

// 0l. c function to delete an integer item at the front end of queue using global variables
void delete_front()
{
    if(f>r)
    {
        printf(" Queue is empty \n");
        return;
    }
    printf(" Item deleted from queue %d \n",q[f++]);
    if(f>r) // after reading an item it may so happen that queue may be empty so immediately after deleting an element if q is empty initialize f=0 and r=-1
    {
        f=0;
        r=-1;
    }
}

// 0m. c function to delete an integer item at the front end of queue using reference variables
void delete_front(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf(" Queue is empty \n");
        return;
    }
    printf(" Item deleted from queue %d \n",q[(*f)++]);
    if(*f>*r) // after reading an item it may so happen that queue may be empty so immediately after deleting an element if q is empty initialize f=0 and r=-1
    {
        *f=0;
        *r=-1;
    }
}

// 0n. c function to display contents of queue using global variables
void display()
{
    if(f>r)
    {
        printf(" Queue is empty \n");
        return;
    }
    printf(" The contents of queue are \n");
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}

// 0o. c function to display contents of queue using parameters
void display(int q[],int f,int r)
{
    if(f>r)
    {
        printf(" Queue is empty \n");
        return;
    }
    printf(" The contents of queue are \n");
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}

// 0p. c function to insert an item at the front end of Double Ended Queue (Dequeue) using global variables
void insert_front()
{
    if(f==0 && r==-1) //when queue is empty,item can be inserted at front end by incrementing r by 1 and then insert an item
    {
        q[++r]=item;
        return;
    }
    if(f!=0)
    {
        q[--f]=item; // some items are deleted at front but queue is not empty
        return;
    }
    printf(" Insertion not possible \n"); // some items are inserted but not deleted
}

// 0q. c function to delete from rear end of queue using global variables
void delete_rear()
{
    if(f>r)
    {
        printf(" Queue is empty\n");
        return;
    }
    printf(" The element deleted is %d\n",q[r--]);
    if(f>r)
    {
        f=0;
        r=-1;
    }
}

// 0r. c function to insert at the rear end of a circular queue by passing parameters
void insert_rear(int item,int q[],int *r,int *count)
{
    if(*count==Queue_size)
    {
        printf(" Queue overflow \n");
        return;
    }
    *r=(*r+1)%Queue_size;
    q[*r]=item;
    (*count)++;
}

// 0s. c function to insert at the rear end of a circular queue by using global variables
void insert_rear(int item,int q[],int r,int count)
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

// 0t. c function to delete at the front end of a circular queue by passing parameters
void delete_front(int q[],int *f,int *count)
{
    if((*count)==0)
    {
        printf(" Queue underflow \n");
        return;
    }
    printf(" The item deleted is %d\n",q[*f]);
    *f=(*f+1)%Queue_size;
    (*count)--;
}

// 0u. c function to delete at the front end of a circular queue by using global variables
void delete_front(int q[],int f,int count)
{
    if(count==0)
    {
        printf(" Queue underflow \n");
        return;
    }
    printf(" The item deleted is %d\n",q[f]);
    f=(f+1)%Queue_size;
    count--;
}

// 0v. c function to display the contents of circular queue by passing parameters
void display(int q[],int f,int count)
{
    int i;
    if(count==0)
    {
        printf(" Queue is empty\n");
        return;
    }
    printf(" Contents of queue are \n");
    for(i=1;i<=count;i++)
    {
        printf("%d\n",q[f]);
        f=(f+1)%Queue_size;
    }
}

// 0w. c function to display the contents of circular queue by using global variables
void display()
{
    int i;
    if(count==0)
    {
        printf(" Queue is empty\n");
        return;
    }
    printf(" Contents of queue are \n");
    for(i=1;i<=count;i++)
    {
        printf("%d\n",q[f]);
        f=(f+1)%Queue_size;
    }
}

// 0x. c function to insert an item at the correct place in priority
void insert_item(int item,int q[],int *r)
{
    int j;
    if(*r==Queue_size-1)
    {
        printf(" Queue is full\n");
        return;
    }
    // find appropriate position to make room for inserting an item based on priority
    j=*r;
    while(j>=0 && item<=q[j])
    {
        q[j+1]=q[j];
        j--;
    }
    q[j+1]=item;
    *r=*r+1;
}
/* Implementation : Assume the item to be inserted itself denotes the priority. The item with least value has highest priority and items with highest value has least priority
therefore insert the elements into the queue in such a way that they are always ordered in increasing order .that is ;highest priority elements are at the front end
of the queue and lowest priority elements are at the rear end of the queue.therefore by deleting an item always delete from the front end so that highest priority element is deleted
first */

// a. Node: defined as structure
struct node //header
{
    int info; // can be any data type
    struct node *link; // self referential structure
};
typedef struct node *NODE;

// A pointer variable first can be declared as
// method 1 NODE first
// method 2 struct node *first

// the info and link field can be accessed using the following notations
// 1
// first->info
// first->link
// 2
// (*first).info
// (*first).link

// b. c function to get node from Available list
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf(" Out of memory \n");
        exit(0); // or return;
    }
    return x;
}

// c. c function to free node
void freenode(NODE x)
{
    free(x);
}

// d. c function to insert a node at the front end of a SLL
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}

// e. c function to display the contents of a SLL
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf(" List is empty\n");
        return;
    }
    printf(" Contents of SLL are \n");
    temp=first;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp=temp->link;
    }
    printf("\n");
}

// f. c function to delete a node/item from the front end of a SLL
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf(" List is empty and hence cannot be deleted \n");
        return;
    }
    temp=first;
    temp=temp->link;
    printf(" Item deleted is %d\n",first->info);
    freenode(first);
    return temp; // temp is now the first node of the list
}

// in void main
// NODE first=NULL; // to start , List is empty

// g. c function to insert an item at the rear end of SLL
NODE insert_rear(int item,NODE first)
{
    NODE temp,cur;
    temp=getnode(); // create a node to be inserted
    temp->info=item; // and insert the item
    temp->link=NULL;
    if(first==NULL) // if the node temp is inserted into the list for the first time i.e when list is empty
    {
        return temp; // then return temp itself as the first node
    }
    cur=first; // with the existing list, obtain the address of the last node,use pointer cur (current) which initially points to first node
    while(cur->link!=NULL)
    {
        cur=cur->link; // obtain the address of last node :update cur till the last node is reached
        // if cur->link contains '\0' the cur points to last node
    }
    cur->link=temp; // insert temp at the end of the list
    return first; // return the address of first node
}

// h. c function to delete a node/item from the rear end of SLL
NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first==NULL) // list is empty  hence it is not possible to delete an item
    {
        printf(" List is empty\n"); // so we print appropriate message
        return first;
    }
    if(first->link==NULL) // list has only 1 node
    {
        printf(" Item to be deleted is %d\n",first->info);
        freenode(first);
        return NULL; // now list becomes empty
    }
    // list has more than 1 node
    // to delete the last node, we need to find the address of the last node and the address of last but one node use 2 pointers cur and prev
    // initially cur points to first node and prev points to null
    // repeatedly update cur and prev as long as the link field of cur is not null
    prev=NULL;
    cur=first;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf(" Item deleted is %d\n",cur->info);
    freenode(cur); // delete the last node pointed by cur using function free node
    prev->link=NULL; // the node pointed to by prev is the last node ans therefore null is copied into the link field of prev
    return first; // return the address of first node
}



// 1. c function to create an orderly linked list
NODE insert_order(int item,NODE first)
{
    NODE temp,prev,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    {
        return temp;
    }
    if(item<first->info)
    {
        temp->link=first;
        return temp;
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL && item>cur->info)
    {
        prev=cur;
        cur=cur->link;
    }
    // insert node between prev and cur
    prev->link=temp;
    temp->link=cur;
    return first;
}

// 2. c function to search for a key in the list
void search(int key,NODE first)
{
    NODE cur;
    if(first==NULL)
    {
        printf(" The list is empty\n");
        return;
    }
    cur=first;
    while(cur!=NULL)
    {
        if(key==cur->info)
        {
            break;
        }
        cur=cur->link;
    }
    if(cur==NULL)
    {
        printf(" Search is unsuccessful \n");
        return;
    }
    printf(" Search is successful\n");
}

// 3. c function to delete a node whose information field is specified
NODE delete_info(int key,NODE first)
{
    NODE prev,cur;
    if(first==NULL)
    {
        printf(" List is empty \n");
        return NULL;
    }
    if(key==first->info)
    {
        cur=first;
        first=first->link;
        freenode(cur);
        return first;
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL)
    {
        if(key==cur->info)
            break;
        prev=cur;
        cur=cur->link;

    }
    if(cur==NULL)
    {
        printf(" Search is unsuccessful\n");
        return first;
    }
    prev->link=cur->link;
    freenode(cur);
    return first;
}

// 4. c function to delete the node from the specified position
NODE delete_pos(int pos,NODE first)
{
    int count;
    NODE prev,cur;
    if(first==NULL || pos<=0)
    {
        printf(" Invalid position\n");
        return NULL;
    }
    if(pos==1)
    {
        cur=first;
        first=first->link;
        freenode(cur);
        return first;
    }
    prev=NULL;
    cur=first;
    count=1;
    while(cur!=NULL)
    {
        if(count==pos)
            break;
        prev=cur;
        cur=cur->link;
        count++;
    }
    if(cur==NULL)
    {
        printf(" Search is unsuccessful\n");
        return first;
    }
    prev->link=cur->link;
    freenode(cur);
    return first;
}

// 5. c function to concatenate two lists
NODE concate(NODE first,NODE second)
{
    NODE cur;
    if(first==NULL)
        return second;
    if(second==NULL)
        return first;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=second;
    return first;
}

// 6. c function to reverse a list without creating a new node
NODE reverse(NODE first)
{
    NODE cur,temp;
    cur=NULL; //initial reverse list
    while(first!=NULL)
    {
        temp=first;
        first=first->link;
        temp->link=cur;
        cur=temp;
    }
    return cur;
}

// 7. c function to insert an item at the specified position
NODE insert_pos(int item,int pos,NODE first)
{
    NODE temp,prev,cur;
    int count;
    temp=getnode(); // create a node with item given
    temp->info=item;
    temp->link=NULL:
        if(first==NULL)
            return temp; //inserting the node for the first time
        if(pos==1)
        {
            temp->link=first;
            return temp; //for the first position
        }
        // to find the appropriate position
        count=1;
        prev=NULL;
        cur=first;
        while(cur!=NULL && count!=pos)
        {
            prev=cur;
            cur=cur->link;
            count++;
        }
        if(count==pos)
        {
            prev->link=temp;
            temp->link=cur;
            return first;
        }
        printf(" Invalid position\n");
        return first;
}

// 8. c function to insert a node at the front end of CSLL
NODE insert_front(int item,NODE last)
{
    NODE temp;
    temp=getnode();
    temp->info=item; //place item in info field of temp
    temp->link=NULL; // create a node
    if(last==NULL) // list is empty
    {
        last=temp; // temp itself is the last node
    }
    else
    {
     temp->link=last->link;
    }
    last->link=temp;
    return last;
}

// 9. c function to insert a node at the rear end of CSLL
NODE insert_rear(int temp,NODE last)
{
    NODE temp;
    temp=getnode(); // create a node
    temp->info=item;
    if(last==NULL)
    {
        last=temp;
    }
    else
    {
     temp->link=last->link;
    }
    last->link=temp;
    return temp;
}

// 10. c function to delete a node at the front end of CSLL
NODE delete_front(NODE last)
{
    NODE temp,first;
    if(last==NULL) // list is empty
    {
        printf(" List is empty \n");
        return NULL;
    }
    if(last->link==last) //list has 1 node
    {
        printf(" Item deleted is %d \n",last->info);
        freenode(last);
        return NULL;
    }
    first=last->link; // list has more than 1 node
    last->link=first->link;
    printf(" Item deleted is %d \n",first->info);
    freenode(first);
    return last;
}

// 11. c function to delete a node from the rear end of CSLL
NODE delete_rear(NODE last)
{
    NODE prev;
    if(last==NULL) // list is empty
    {
        printf(" List is empty \n");
        return NULL;
    }
    if(last->link==last) // list has only 1 node
    {
        printf(" Item deleted is %d \n",last->info);
        freenode(last);
        return NULL; // it becomes empty list
    }
    prev=last->link; // first node in the list ,traversing from first node
    while(prev->link!=last)
    {
        prev=prev->link;
    }
    prev->link=last->link;
    printf(" Item deleted is %d \n",last->info);
    freenode(last);
    return prev; // prev is the last node in the list now
}

// 12. c function to display the contents of the CSLL
void display(NODE last)
{
    NODE temp;
    if(last==NULL) // list is empty
    {
        printf(" List is empty\n");
        return;
    }
    printf(" Contents of the list are \n");
    temp=last->link; // address of the first node
    while(temp!=last)
    {
        printf("%d",temp->info);
        temp=temp->link;
    } // until we reach the last node
    printf("%d",temp->info); // display the content/info of last node
    printf("/n");
}

/* A HEADER NODE in a linked list is a specified node,whose link field always contains
the address of the first node of the list */

// in void main
// NODE head;
// head=getnode(); get node function
// head->info=0;
// head->link=head;

// 13. c function to insert a node at the front end using header node of a CSLL
NODE insert_front(int item,NODE head)
{
    NODE temp;
    temp=getnode(); //  create a node
    temp->info=item;
    temp->link=head->link;
    head->link=temp;
    return head;
}

// 14. c function to insert a node at the rear end using header node of a CSLL
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

// 15. c function to delete the node whose item is specified of CSLL using header node
NODE delete_item(int item,NODE head)
{
    NODE prev,cur;
    if(head->link==head) // list is empty
    {
       printf(" List is empty\n");
       return NULL;
    }
    prev=head;
    cur=head->link;
    while(cur!=head)
    {
        if(item==cur->info)
        {
            break;
        }
        prev=cur;
        cur=cur->link;
    }
    if(cur==head)
    {
        printf(" Item not found \n");
        return head;
    }
    prev->link=cur->link;
    freenode(cur);
    return head;
}

// 16. c function to delete a node at the front end of CSLL using header node
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

// 17. c function to delete a node at the rear end of CSLL using header node
NODE delete_rear(NODE head)
{
    NODE prev,cur;
    if(head->link==head)
    {
        printf(" List is empty \n");
        return NULL:
    }
    prev=head;
    cur=head->link;
    while(cur->link!=head)
    {
        prev=cur;
        cur=cur->link;
    }
    prev->link=cur->link;
    printf(" Item deleted is %d \n",cur->info);
    freenode(cur);
    return head;
}

// 18. c function to insert a node at the specified position of CSLL using header node
NODE insert_position(int item,int pos,NODE head)
{
    NODE prev,temp,cur;
    int count;
    temp=getnode();
    temp->info=item;
    prev=head;
    cur=head->link;
    count=1;
    while(cur!=head)
    {
        if(count==pos)
        {
            break;
        }
        prev=cur;
        cur=cur->link;
        count++;
    }
    if(count!=pos)
    {
        printf(" Invalid position \n");
        return head;
    }
    prev->link=temp;
    temp->link=cur;
    return head;
}

// 19. c function to delete a node from the specified position of CSLL using header node
NODE delete_position(int pos,NODE head)
{
    NODE prev,cur;
    int count;
    prev=head;
    cur=head->link;
    count=1;
    while(cur!=head)
    {
        if(count==pos)
        {
            break;
        }
        prev=cur;
        cur=cur->link;
        count++;
    }
    if(count!=pos)
    {
        printf(" Invalid position \n");
        return head;
    }
    prev->link=cur->link;
    freenode(cur);
    return head;
}

// 20. c function to display contents of CSLL with header node
void display(NODE head)
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

// 21. Structure to define Doubly Linked List (DLL)
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;

// 22. c function to insert a node at the front end of DLL using header node
NODE insert_front(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    // to get address of first node
    cur=head->rlink;
    head->rlink=temp;
    temp->llink=head;
    temp->rlink=cur;
    cur->llink=temp;
    return head;
}

// 23. c function to insert a node at rear end of DLL using header node
NODE insert_rear(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    // to get address of the last node
    cur=head->llink;
    head->llink=temp;
    temp->rlink=head;
    cur->rlink=temp; // no traversing required
    temp->llink=cur;
    return head;
}

// 24. c function to delete a node from the front end of DLL using header node
NODE delete_front(NODE head)
{
    NODE cur,next;
    if(head->rlink==head) // or head->llink==head
    {
        printf(" List is empty \n");
        return head;
    }
    cur=head->rlink; // address of first node
    next=cur->rlink; // address of next node
    head->rlink=next;
    next->llink=head;
    printf(" Item deleted is %d \n",cur->info);
    freenode(cur);
    return head;
}

// 25. c function to delete a node from the rear end of DLL using header node
NODE delete_rear(NODE head)
{
    NODE cur,prev;
    if(head->rlink==head)
    {
        printf(" List is empty \n");
        return;
    }
    cur=head->llink;
    prev=cur->llink;
    head->llink=prev;
    prev->rlink=head;
    printf(" Item deleted is %d \n",cur->info);
    freenode(cur);
    return head;
}

// 26. c function to delete a node whose information field (item) is specified of DLL using Header node
NODE delete_item(int item,NODE head)
{
    NODE prev,cur,next;
    if(head->rlink==head)
    {
        printf(" List is empty \n");
        return head;
    }
    cur=head->rlink;
    while(cur!=head)
    {
        if(item==cur->info)
        {
            break;
        }
        cur=cur->rlink;
    }
    if(cur==head)
    {
        printf(" Item not found\n");
        return head;
    }
    prev=cur->llink;
    next=cur->rlink;
    prev->rlink=next;
    next->llink=prev;
    freenode(cur);
    return head;
}

// 27. c function to delete all nodes whose information field is specified using DLL with header node
NODE delete_item(int item,NODE head)
{
    NODE prev,cur,next;
    int count;
    if(head->rlink==head)
    {
        printf(" List is empty \n");
        return head;
    }
    count=0;
    cur=head->rlink;
    while(cur!=head)
    {
        if(item!=cur->info)
        {
          cur=cur->rlink;
        }
        else
        {
         count++;
         prev=cur->llink;
         next=cur->rlink;
         prev->rlink=next;
         next->llink=prev;
         freenode(cur);
         cur=next;
        }
    }
    if(count==0)
    {
        printf(" Item/key not found\n");
    }
    else
    {
     printf(" Key found , Number of Nodes deleted is %d \n",count);
     return head;
    }
}

// 28. c function to read a long positive number
NODE read_number(NODE head) // CSLL with head
{
    char c;
    while((c=getche())!='\r')
    {
        if(isdigit(c))
        {
            head=insert_front(c-'0',head); // c-'0' to take digit , if we give just c then it takes its ASCII values
        }
        else
        {
        printf(" Invalid input/integer \n");
        exit(1);
        }
    }
    printf("\n");
    return head;
}
/* Design : Consider the number 6698274 there are 7 digits and hence there are 7 nodes. the first digit typed will be the left most digit of the number and the last digit
typed will be the right most of the number
LSB -> 1st node
MSB -> Last node */





