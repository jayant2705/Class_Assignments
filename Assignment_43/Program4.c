
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

int SumOfDigits(int num)
{
    int sum = 0;

    if (num < 0)
    {
        num = -num;   // handle negative numbers
    }

    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

void DigitsSum(PNODE head)
{
    printf("Data and sum of its digits:\n");

    int Digitsum = 0;

    while (head != NULL)
    {
        Digitsum = SumOfDigits(head->data);
        printf("Node data = %d, Sum of digits = %d\n", head->data, Digitsum);
        head = head->next;
    }
}

int main()
{
    int iRet = 0;
    int iResult = 0;

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

    DigitsSum(head);

    return 0;
}
