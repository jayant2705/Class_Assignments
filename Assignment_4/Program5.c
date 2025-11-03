#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFactors = 0;
    int iSumNonFactor = 0;
    int i = 0;

    if(iNo <= 0)
    {
        return 0;
    }
    for(i=1; i<= iNo; i++)
    {
        if(iNo % i ==0)
        {
            iSumFactors = iSumFactors + i;
        }
        else
        {
            iSumNonFactor = iSumNonFactor + i;
        }
    }
    return iSumFactors - iSumNonFactor;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}