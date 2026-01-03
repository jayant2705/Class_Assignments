#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void InserLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)   
    {
        *first = newn;
    }
    else                 
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    int iSize = 0;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize + 1))        
    {
        printf("Invalid Position.");
        return;
    }

    if(pos == 1)
    {
        InserFirst(first,no);
    }
    else if(pos == iSize + 1)
    {
        InserLast(first,no);
    }
    else
    {

        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;

        temp = (*first);

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;   
        temp -> next = newn;           
    }

}

void CountDigits(PNODE first)
{
    while(first != NULL)
    {
        int num = first->data;
        int digits = 0;

        if(num == 0)
        {
            digits = 1;  
        }
        else
        {
            if(num < 0) num = -num;  

            while(num != 0)
            {
                digits++;
                num = num / 10;
            }
        }

        printf("Node value: %d, Digits: %d\n", first->data, digits);

        first = first->next;
    }
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;

    InserFirst(&head,51);
    InserFirst(&head,20);
    InserFirst(&head,11);

    InserLast(&head, 101);
    InserLast(&head, 111);
    InserLast(&head, 121);

    InsertAtPos(&head,110,3);
    InsertAtPos(&head,112,5);

    Display(head);

    iRet = Count(head);
    printf("\n");
    printf("%d nodes are in the linked list.",iRet);
    printf("\n");

    printf("\nDigit count of each node:\n");

    CountDigits(head);

    return 0;
}