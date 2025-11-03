#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("it is Even number \n",iValue);
    }
    else
    {
        printf("it is Odd number \n",iValue);
    }
    return 0;
}
