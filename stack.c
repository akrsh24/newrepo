#include<stdio.h>
#include<string.h>
#define size 3
struct stack
{
    int top;
    int elements[size];
};
typedef struct stack stack;
int main()
{
    int ch;
    char c;
    do
    {


        printf("1. POP");
        printf("\n2. PUSH");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n\nENTER YOUR CHOICE\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
        {
            //pop();
            printf("pushing\n");
            break;
        }
        case 2:
        {
            //push();
            printf("popping\n");
            break;
        }
        case 3:
        {
            //display();
            printf("displaying\n");
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

