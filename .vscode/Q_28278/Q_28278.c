// 스택2

#include <stdio.h>
#include <string.h>

#define max_size 1000001

void push(int stack[], int x, int *top)
{
    if(*top >= max_size -1)
        return;
    else
        stack[++(*top)] = x;
}

int pop(int stack[], int *top)
{
    if(*top == -1)
        return -1;
    else    
        return stack[(*top)--];
}

void size(int *top)
{
    printf("%d\n", *top+1);
}

void empty(int *top)
{
    int n;
    n = (*top == -1) ? 1:0;
    printf("%d\n", n);
}

void Top(int stack[], int *top)
{
    int n;
    n = (*top == -1) ? -1 : stack[*top];
    printf("%d\n", n);
}

int main()
{
    int n, func, in;
    int top = -1, num = 0;
    int stack[max_size];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &func);

        if(func == 1)
        {
            scanf("%d", &in);
            push(stack, in, &top);
        }
        else if(func == 2)
        {
            num = pop(stack, &top);
            printf("%d\n", num);
        }
        else if(func == 3)
        {
            size(&top);
        }
        else if(func == 4)
        {
            empty(&top);
        }
        else if(func == 5)
        {
            Top(stack, &top);
        }
        else 
            return -1;
    }

    return 0;
}