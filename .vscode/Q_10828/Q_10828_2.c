// 스택

#include <stdio.h>
#include <string.h>

#define max_size 100001

void push(int stack[], int num, int *top)
{
    if (*top >= max_size - 1)
        return;
    else stack[++(*top)] = num; 
}

int pop(int stack[], int *top)
{
    if (*top == -1)
        return -1;
    else return stack[(*top)--];
}

void size(int *top)
{
    printf("%d\n", *top+1);
}

void empty(int *top)
{
    int e;
    e = (*top == -1) ? 1 : 0;
    printf("%d\n", e);
}

void Top(int stack[], int *top)
{
    int t;
    t = (*top == -1) ? -1 : stack[*top];
    printf("%d\n", t);
}

int main()
{
    int N;
    char str[6];
    int stack[max_size];
    int num, output = 0;
    int top = -1;

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%s", str);

        if(strcmp(str, "push") == 0)
        {
            scanf("%d", &num);
            push(stack, num, &top);
        }

        else if(strcmp(str, "pop") == 0)
        {
            output = pop(stack, &top);
            printf("%d\n", num);
        }

        else if(strcmp(str, "size")  == 0)
        {
            size(&top);
        }

        else if(strcmp(str, "empty") == 0)
        {
            empty(&top);
        }

        else if(strcmp(str, "top") == 0)
        {
            Top(stack, &top);
        }

        else return -1;
    }

    return 0;
}