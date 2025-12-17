
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

int Minimum(PNODE head)
{
    int min = head->data;
    PNODE temp = head->next;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }

    return min;
}

int main()
{
    int iRet = 0;
    int iResult = 0;

    PNODE head = NULL;

    InserFirst(&head,70);
    InserFirst(&head,30);
    InserFirst(&head,50);
    InserFirst(&head,40);
    InserFirst(&head,30);
    InserFirst(&head,20);
    InserFirst(&head,10);

    Display(head);

    iRet = Count(head);
    printf("\n");
    printf("%d nodes are in the linked list.",iRet);
    printf("\n");

    iResult = Minimum(head);

    printf("Minimum node value is: %d\n", iResult);

    return 0;
}
