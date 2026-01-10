// 제로

#include <stdio.h>
#include <string.h>

#define max_size 1000001

void push(int stack[], int num, int *top)
{
    if (*top >= max_size -1)
        return;
    else
        stack[++(*top)] = num;
}

int pop(int stack[], int *top)
{
    if(*top == -1)
        return -1;
    else    
        return stack[(*top)--];
}

int main()
{
    int k, num;
    int stack[max_size];
    int top = -1;
    int sum = 0;

    scanf("%d", &k);

    for(int i=0; i<k; i++)
    {
        scanf("%d", &num);

        if(num == 0) pop(stack, &top);
        else push(stack, num, &top);
    }

    for(int i=0; i<=top; i++)
    {
        sum += stack[i];
    }

    printf("%d\n", sum);

    return 0;
}