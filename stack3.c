#include<stdio.h>
#include<string.h>
#define size 3
struct stack
{
    int top;
    int element[size];
};

typedef struct stack stack;

int stackfull(int);
int stackempty(int);
int push(int, int);
int pull(int);
void display(int);
stack s[size];
int main()
{
    int ch;

    char c;
    do
    {


        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n\nENTER YOUR cHOIcE\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
        {
            int value;
            printf("enter the number to push\n");
            scanf("%d",&value);
            printf("enter the stack to push\n");
            scanf("%d",&c);
            if(stackfull(c))
            {
                printf("\nstack is full\n");
            }

                else
                {
                    push(value,c);
                    printf("\npushed a value\n\n");
                    break;
                }
            }
            case 2:
            {
                int m;
                printf("enter the stack to pull\n");
                scanf("%d",c);
                if(stackempty(c))
                {
                    printf("\nstack is empty\n");
                }
                m=pop(c);
                printf(" popping\n");
                printf(" popped element %d ",m);
                break;
            }
            case 3:
            {
                printf("enter the stack to pull\n");
                scanf("%d",c);
                printf("\n displaying\n\n");
                display(c);
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
    int stackfull(int c)
    {
        if(s[c].top==(size-1))
        {

            return 1;
        }
        else
            return 0;
    }
    int stackempty(int c)
    {
        if(s[c].top==-1)
        {
            return 1;
        }
        else
            return 0;
    }
    int push(int value, int c)
    {
        ++(s[c].top);
        s[c].element[s[c].top]=value;
    }


    int pop(int c)
    {
        int k;
        {
            k=s[c].element[s[c].top];
            --(s[c].top);
        }
        return (k);
    }
    void display(int c)
    {
        int i;
        if(stackempty(c))
        {
            printf("\nstack is empty\n");
        }
        else
        {
            printf(" stack elements\n: ");
            for(i=s[c].top; i>0; i--)
                printf("\n %d ",s[c].element[i]);
        }
    }

