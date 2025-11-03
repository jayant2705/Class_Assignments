#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i = 0, iSum = 0;
    if(iStart > iEnd || iStart <0 || iEnd < 0)
    {
        printf("Invalid Range\n");
        return 0;
    }
    for(i = iStart; i<= iEnd; i++)
    {
        if(i % 2 == 0)
        {
         iSum = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet;

    printf("Enter Starting\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    printf("Addition is %d",iRet);

    return 0;
}