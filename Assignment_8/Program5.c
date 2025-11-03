
#include<stdio.h>

int TableDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo*10; iCnt >= iNo; iCnt = iCnt - iNo)
    {
        printf("%d\t", iCnt);
    }   
}
int main()
{
    int iValue = 0;
    int itable = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    TableDisplay(iValue);

    return 0;
}
