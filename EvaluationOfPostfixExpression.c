//Application of Stack :Evaluation of expression
//Evaluation of Postfix Expression
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<stdlib.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case '+': return op1+op2; //as return statement is used ,no need of break
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': if(op2==0)
                  {
                  printf("Division by zero error");
                  exit(0);
                  }
                  return op1/op2;
        case '$':
        case '^':return pow(op1,op2);
    }
}
void main()
{
    double s[20],res,op1,op2;
    int top,i;
    char postfix[20];
    char symbol;
    top=-1;
    printf(" Enter postfix expression \n");
    scanf("%s",postfix);
    for(i=0;i<strlen(postfix);i++)
    {
     symbol=postfix[i]; // scan symbol from left to right
     if(isdigit(symbol)) //if scanned symbol is an operand push it onto stack
     {
         s[++top]=symbol-'0'; //ASCII value of 0,converting to actual value
     }
     else //if scanned element is an operator,pop 2 elements from stack,first popped element is operand 2,second popped element is operand 1
     {
         op2=s[top--];
         op1=s[top--];
         res =compute(symbol,op1,op2); //perform the indicated operation
         s[++top]=res; //push result onto stack
     }
    }//end of for loop
    res=s[top--];
    printf(" The result is %f \n",res);
}//end main
//NOTE: This program is for evaluation of only single digit

