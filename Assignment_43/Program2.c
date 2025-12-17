
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*first) == NULL)   
    {
        (*first) = newn;
    }
    else                 
    {
        newn -> next = (*first);
        (*first) = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

int CheckPrime(int No)
{
    int i = 0;

    if (No <= 1)
    {
        return 0;         
    }

    for (i = 2; i <= No / 2; i++)
    {
        if (No % i == 0)
        {
            return 0;       
        }
    }

    return 1;               
}

void DisplayPrimeNodes(PNODE head)
{
    printf("Prime number nodes: ");

    while (head != NULL)
    {
        if (CheckPrime(head->data))
        {
            printf("%d ", head->data);
        }
        head = head->next;
    }

    printf("\n");
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;

    InserFirst(&head,70);
    InserFirst(&head,31);
    InserFirst(&head,28);
    InserFirst(&head,47);
    InserFirst(&head,30);
    InserFirst(&head,6);
    InserFirst(&head,10);

    Display(head);

    iRet = Count(head);
    printf("\n");
    printf("%d nodes are in the linked list.",iRet);
    printf("\n");

    DisplayPrimeNodes(head);

    return 0;
}
