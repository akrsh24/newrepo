#include<stdio.h>
#include<string.h>
#define size 3
struct linkedList
{
    int value;
    struct linkedList *next;
};

typedef struct linkedList linkedList;
linkedList *head;
linkedList *tail;
linkedList s;
void insert(int );
int l_listEmpty();
int *fetch(int );
void display();
void main()
{

    int ch;
    do
    {


        printf("\n1. INSERT");
        printf("\n2. FETCH");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n\nENTER YOUR CHOICE\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
        {
            int value;
            printf("enter the number to insert\n");
            scanf("%d",&value);
            insert(value);
            printf("\ninserted a value\n\n");
            break;
        }


        case 2:
        {
            int m,*n;
            printf("\nenter the element position to fetch\n");
            scanf("%d",&m);
            printf(" fetching\n");
            n=*fetch(m);
            printf("fetched element:\n",n);
            break;
        }
        case 3:
        {

            printf("\n displaying\n\n");
//display();
            break;
        }
        case 4:
        {
            return 0;
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

void insert(int value)
1{

    if(head==NULL)
    {
        linkedList block;
        block.value=value;
        head=&value;
        tail=&value;
    }
    linkedList block2;
    block2.value=value;
    (*tail).next=&value;
    tail=&value;
}
int *fetch(int pos)
{
    int i ,j,*temp;
    for(j=0;j<pos;j++)
    {
        *temp=&(head);
        temp=(head->next);
    }
    return temp;
}
   /* linkedList *current, *behind;
    current = head;

    for( i = 0; i <*pos ; i++ )
    {
        if( current->next )
        {
            current = current->next;
        }
        else
        {
            printf("error\n");
            return NULL;
        }
    }


    //behind = head;
    while( current->next!=NULL )
    {
        current = current->next;
        behind = behind->next;
    }
    return behind;
}*/
void display()
{ int *rep;
    while()
    {
        *rep=&(head);

        printf("%d",*(rep));
        rep=head->next;

    }
}
