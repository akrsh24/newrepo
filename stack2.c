#include<stdio.h>
#include<string.h>
#define size 3
struct stack
{
    int top;
    int element[size];
};

typedef struct stack stack;
stack s;
int push(int);
int pull();
void display();
int main()
{

    int ch;
    do
    {


        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n\nENTER YOUR CHOICE\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
        {   int value;
            printf("enter the number to push\n");
            scanf("%d",&value);
            if(stackfull())
            {
            printf("\nstack if full\n");
            }
            else
            {
            push(value);
            printf("\npushed a value\n\n");
            break;
            }
        }
        case 2:
        {
            int m;
             m=pop();
            printf(" popping\n");
            printf(" popped element %d ",m);
            break;
        }
        case 3:
        {

            printf("\n displaying\n\n");
            display();
            break;
        }
        case 4:
        {
            return 0;;
            break;
        }

        default:
        {
            printf("no choice\n");
        }
        }
    }
    while(ch!=4);
    return 0;
}
int stackfull()
{
    if(s.top==(size-1))
{
    printf("\nstack is full\n");
        return 1;
    }
    else
        return 0;
}
int stackempty()
{
if(s.top==-1)
    {
     return 1;
    }
    else
    return 0;
}
int push(int value)
{
        ++(s.top);
        s.element[s.top]=value;
}


int pop()
{
    int k;
    {
        k=s.element[s.top];
        --(s.top);
    }
    return k;
}
void display()
{ int i;
if(stackempty())
{
    printf("\nstack is empty\n");
}
else{
        printf(" stack elements: \n");
        for(i=s.top; i>0; i--)
        printf("\n %d ",s.element[i]);
}
}

