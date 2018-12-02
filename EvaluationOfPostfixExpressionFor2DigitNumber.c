//Evaluation Of Postfix Expression For 2 Digit Number
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 50 // size of stack
int s[SIZE];
int top=-1; //global declaration
int flag=0;
void push(int elem) //function for push operation
{
    if(flag==1)
    {
        int n;
        n=pop();
        s[++top]=elem+10*n;
    }
    else if(flag==0){
        s[++top]=elem;
        flag=1;
    }
}
int pop() //function for pop operation
{
    return(s[top--]);
}
int main()
{
    char pofx[50],ch;


    int i=0,op1,op2;
    printf(" Enter the valid postfix expression : \n");
    fgets(pofx,100,stdin);

    while((ch=pofx[i++])!='\n')
    {
        if(isdigit(ch))
            push(ch-'0');
        else if(ch==' ')
            flag=0;
        else
        {
            flag=0;
            op2=pop();
            op1=pop();
            switch(ch)
            {
            case '+':{
                      push(op1+op2);
                      break;
                      }
            case '-':{
                      push(op1-op2);
                      break;
                      }
            case '*':{
                      push(op1*op2);
                      break;
                      }
            case '/':{
                      if(op2==0)
                      {
                          printf(" Division by zero error ");
                          exit(0);
                      }
                      push(op1/op2);
                      break;
                      }
            } // end of switch

        }

    }
    printf(" The result of expression : %d \n",s[top]);
    return 0;
}
// example : input 10 12 + 3 4 - +  result 21
/* Logic used behind code:
take input of the postfix expression as a string and each number separated from another by a space ' ' separator
(any character might be used that is not a digit or used arithmetic symbol)
scan from left of the expression and set a flag variable to zero
if a digit is encountered it is pushed into the top of the stack and the flag variable is switched to 1
now if the next character is a separator ' ' change the flag to 0 and stack top is increased by 1
if the next character is not a separator pop up the value from top in stack and multiply it by 10 and add up with the newly encountered
digit .Push the final result to the top of the stack
if any used arithmetic symbol is encountered then pop up the top variables and perform the operation and finally push result into top of stack
when end character is encountered of string display top element of the stack
this code works fine for +,-,*,/
*/

