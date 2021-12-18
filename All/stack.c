#include <stdio.h>

#define n 5
int stack[n];
int top = -1;

void push()
{
    int x;

    if (top == n - 1)
    {
        printf("overflow\n");
    }
    else
    {
        printf("Enter the data = ");
        scanf("\n%d", &x);
        top++;
        stack[top] = x;
        // printf("%d", x);
    }
}
void pop()

{
    int item;
    if (top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        item = stack[top];
        stack[top] = 0;
        top--;
        printf("%d", item);
    }
}
    void peek()
    {
        printf("%d", stack[top]);
    }
    void display()
    {
        int i;
        if (top == -1)
        {
            printf("stack is empty\n");
        }
        else
        {
            printf("display stack\n");
            for (i=4 ; i >= 0; i--)
            {
                printf("%d\n", stack[i]);
            }
        }
    }


void main()
{

    int ch;
    while (1)
    {
        printf("Enter choice:\n1. Push\n2. Pop\n3. Peek\n4. Display\n\n");
        printf("\n\n Enter the choice(1-4) = \n\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("\n\ninvalid choice\n\n");
            break;
        }
    }
}
