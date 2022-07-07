#include <iostream>
#include <string.h>
using namespace std;

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

int isMatched(char toBeEvaluated, char poppedValue)
{
    if (toBeEvaluated == '}' && poppedValue == '{')
        return 1;
    if (toBeEvaluated == ']' && poppedValue == '[')
        return 1;
    if (toBeEvaluated == ')' && poppedValue == '(')
        return 1;

    return 0;
}

int checkPrecedence(char toBeEvaluated ){
    if(toBeEvaluated == '['){
        return 3;
    }
    else if (toBeEvaluated == '{'){
        return 2;
    }
    else if (toBeEvaluated == '('){
        return 1;
    }

    return 0;
}


int multipleBracesMatching(stack *s, string expression)
{
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '[' || expression[i] == '{' || expression[i] == '(')
        {
            if(isEmpty(s) || checkPrecedence(expression[i]) < checkPrecedence(peek(s))){
                push(s, expression[i]);
            }
            else if( !isEmpty(s) &&  checkPrecedence(expression[i] > checkPrecedence(peek(s)))){
                // Ager pehle jo para hai wo kam preceence ka hai aur ab jo aarha hai zyada precedence ka hai 
                // tou push krne ki bajaye yahan se hi unbalanced declarted krdo.
                return 0;
            }
            
        }

        if (expression[i] == ']' || expression[i] == '}' || expression[i] == ')')
        {
            if (isEmpty(s))
            {
                // condition like )( }{ etc. invalid
                return 0;
            }
            char poppedValue = pop(s);
            if (!isMatched(expression[i], poppedValue))
            {
                return 0;
            }
        }
    }
    // ager koi  brackets hoti hi nhi tou ya last main balacned hojayen
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
    if (multipleBracesMatching(s, expression) == 1)
    {
        cout << "Its a valid expression! \n"
             << endl;
    }
    else
    {
        cout << "Its a invalid statement! \n"
             << endl;
    }

    return 0;
}