#include <iostream>
#include <string.h>
using namespace std;

//* infix to Postfix Conversion can be done with any other logic but for this purpose we need to scan the
//* Statement Multiple Times , But With Stack We can Do this thing with only one Scan

struct stack
{
    int size;
    int top = -1;
    char *arr;
};

int isEmpty(stack *s)
{
    // boolean function hai using primitive int in form of 0 and 1 -> the motivation for boolean data type.
    if (s->top < 0)
    {
        return 1;
        // 1 means  True
    }
    else
    {
        return 0;
        // 0 means False
    }
}
int isFull(stack *s)
{

    if (s->top == s->size - 1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *s, char value)
{
    if (isFull(s) == 1)
    {
        cout << "The Stack is already filled" << endl;
        return;
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}
char pop(stack *s)
{
    if (isEmpty(s) == 1)
    {
        cout << "The stack is already Empty" << endl;
        return ' '; // NULL in the case of empty stack
    }

    else
    {
        char poppedValue = s->arr[s->top];
        s->top--;
        return poppedValue;
    }
}
char peek(stack *s)
{
    char peekElement = s->arr[s->top];
    return peekElement;
}

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*' || c == '^' || c == '(' || c == ')')
    {
        return 1;
    }
    return 0;
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
    
        return 2;
    
    else if (c == '-' || c == '+')
    
        return 1;

    else
        return 0;
}
void infixToPostfix(string expression, stack *s)
{

    string postfix;

    for (int i = 0; i < expression.length(); i++)
    {
        // Traversing the whole Expression one time !

        if (!isOperator(expression[i]) == 1)
        {
            // If you encounter operands simply add them to the postfix Statement!
            postfix += expression[i];
        }

        // Special case for Brackets

        else if (expression[i] == '(')
        {
            push(s, expression[i]);
        }

        else if (expression[i] == ')')
        {
            while (!isEmpty(s) && peek(s) != '(')
            {
                postfix += peek(s);
                pop(s);
            }
            pop(s); // so that '(' bhi pop ho jaye!
        }

        else
        {
            // else koi na koi operator hoga
            // ab ismay teen conditions hain
            // aik ager stack already empty ho (push)
            // second ager precedence current char ki zyada ho peek char se (push)
            // ager precedence current char ki kam ho peek char se (pop)
            if (isEmpty(s))
            {
                push(s, expression[i]);
            }

            else if (precedence(expression[i]) > precedence(peek(s)))
            {
                push(s, expression[i]);
            }
            else
            {
                while (!isEmpty(s) && precedence(expression[i]) <= precedence(peek(s)))
                {
                    postfix += peek(s);
                    pop(s);
                
                }
                push(s, expression[i]); //jese hi precedence greater ho jaye push it to the stack
            }
        }

        
    }

    // Now after the traversal, adding the operators present in the stack to the postfix Expression

    while (!isEmpty(s))
    {
        postfix += peek(s);
        pop(s);
    }
    // stack main mojud characters ko postfix main daalna hai!

    cout << postfix << endl;
    
}

int main()
{
    // Making Stack
    stack *s = new stack;
    s->size = 200;
    s->arr = new char[s->size];
    cout << "Enter you Expression \n";
    string expression;
    cin >> expression;
    infixToPostfix(expression, s);
    

    return 0;
}