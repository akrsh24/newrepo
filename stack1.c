#include<stdio.h>
#include<string.h>
#define size 3
struct stack
{
    int top;
    int element[size];
};

typedef struct stack stack;
int push(int*,int,int);
int pull(int*,int);
void display(int*);
int main()
{
    int ch;
    stack *s;
    stack *s1;
    stack *s2;
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
            push(s->element[],value);
            printf("pushing\n");
            break;
        }
        case 2:
        {
            int m;
            m=pop(s->element[]);
            printf("popping\n");
            printf("popped element %d",m);
            break;
        }
        case 3:
        {

            printf("displaying\n");
            display(s->element);
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
        //printf("want to enter more\n");
        //gets(c);
    }
    while(ch!=4);
    return 0;
}
int stackfull()
{
    if(s->top==(size-1))
{
    printf("stack is full\n");
        return 0;
    }
    else
        return 1;
}
int push(int *element[],int n,int value)
{


    {
         s->top=-1;
        ++(s->top);
        s->element[s->top]=value;
        ptr=s->element;
    }

}
int pop()
{
    int k;
    if(s->top==-1)
    {
        printf("\nstack is empty\n");
        return -1;
    }
    else
    {
        k=s->element[s->top];
        --(s->top);
    }
    return k;
}
void display()
{ int i;
    for(i=s.top; i>=0; i--)
        printf("\n %d ",s.element[i]);
}

