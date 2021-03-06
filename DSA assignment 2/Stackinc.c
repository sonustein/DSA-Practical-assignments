#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//stack operation using c language
// 27/09/21
//stack structure
struct Stack
{
    int size;
    int top;
    int *arr;
};
void CreateStack(struct Stack *S, int len) //stack create
{
    S->size = len;
    S->top = -1;
    S->arr = (int *)malloc(sizeof(int) * len);
}
int isEmpty(struct Stack *S)
{
    return S->top == -1;
}
void push(struct Stack *S, int data) // stack push
{
    if (S->top >= S->size - 1)
    {
        printf("stack overflow\n");
        return;
    }
    S->top++;
    S->arr[S->top] = data;
    printf("%d is pushed\n", data);
}
int pop(struct Stack *S)  // stack pop
{
    int x = INT_MIN;
    if (isEmpty(S))
    {
        printf("stack underflow\n");
        return x;
    }
    x = S->arr[S->top];
    S->top--;
    printf("%d is poped\n", x);
    return x;
}
int main()
{
    struct Stack *stack1 = (struct Stack *)malloc(sizeof(struct Stack));
    CreateStack(stack1, 10);
    for (int i = 0; i <= 10; i++)
    {
        push(stack1, i);
    }

    for (int i = 0; i <= 10; i++)
    {
        pop(stack1);
    }
    return 0;
}
/*Q: Write a C program to create a stack of size 10 using an array. Use PUSH operation until the stack is full, and then make the stack empty using POP operation.*/
