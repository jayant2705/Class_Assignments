#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    int i = 0;

    if(iNo<=0)
    {
        return 0;
    }

    for(i=1; i<= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    return 0;
}