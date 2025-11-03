
#include<stdio.h>
int OddEvenFactorialmultiDiff(int iNo)
{
    int iCnt = 0;
    int iMulti1 = 1;
    int iMulti2 = 1;
    int iDifference = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iMulti1 = iMulti1 * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMulti2 = iMulti2 * iCnt;
        }
    }

    iDifference = iMulti1 - iMulti2;

    if(iDifference < 0)
    {
        iDifference = -iDifference;
    }

    return iDifference;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iResult = OddEvenFactorialmultiDiff(iValue);

    printf("The difference is : %d\n", iResult);

    return 0;
}
