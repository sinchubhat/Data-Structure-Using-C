// Application of Stacks : Conversion of expression
// Infix to Prefix expression
#include<stdio.h>
#include<string.h>
// c function which returns stack precedence values
// Function F contains the precedence values of the symbol on the top of stack
int F(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/':return 3;
        case '$':
        case '^':return 6;
        case ')':return 0;
        case '#':return -1;
        default: return 8;
    }
}
// c function which returns precedence values of symbol
// Function G contains the precedence values of symbols in the input string
int G(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-': return 2;
        case '*':
        case '/':return 4;
        case '$':
        case '^':return 3;
        case '(':return 0;
        case ')':return 9;
        default: return 7;
    }
}
// c function to convert infix to prefix expression
void infix_Postfix(char infix[],char prefix[])
{
    int top,i,j;
    char s[30],symbol;
    top=-1;
    s[++top]='#';
    j=0;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        /* as long as precedence value of the symbol on the top of the stack is greater than the precedence value of the current input symbol,pop an
         item from the stack and place it in the prefix expression */
        while(F(s[top])>G(symbol))
        {
            prefix[j++]=s[top--];
        }
        /* once the condition in while loop is failed and if the precedence of the symbol on top of the stack is not equal to the precedence
        value of the current input symbol,push the current symbol onto stack otherwise delete an item from the stack but do not place it in the
        prefix expression  */
        if(F(s[top])!=G(symbol))
            s[++top]=symbol; //push symbol
        else
            top--;
    }
    while(s[top]!='#')
    {
        prefix[j++]=s[top--];
    }
    prefix[j]='\0';
}
void main()
{
    char infix[20],prefix[20];
    printf(" Enter a valid infix expression \n");
    scanf("%s",infix);
     strrev(infix); //reverse the infix expression
    infix_Postfix(infix,prefix);
    strrev(prefix); //prefix expression is obtained by reversing the result
    printf(" The prefix expression \n");
    printf("%s\n",prefix);
}

