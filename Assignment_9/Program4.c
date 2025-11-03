
#include<stdio.h>
int EvenFactMulti(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}
int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iResult = EvenFactMulti(iValue);

    printf("The even factorial multiplication is : %d\n", iResult);

    return 0;
}
