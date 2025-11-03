
#include<stdio.h>

int FactorMulti(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMulti = iMulti * iCnt;
    }

    return iMulti; 

}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iResult = FactorMulti(iValue);

    printf("The multiplication of factors is : %d\n", iResult);


    return 0;
}
