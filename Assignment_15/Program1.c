#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            icnt++;
        }
        iNo = iNo / 10;
    }
    return icnt++;

}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =  CountEven(iValue);
    printf("Frequency of Digit is :%d\n",iRet);
    return 0;
}