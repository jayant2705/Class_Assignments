#include<stdio.h>
int CountLessThanSix(int iNo)
{
    int iDigit = 0;
    int icnt = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            icnt++;
        }
        iNo = iNo / 10;
    }
    return icnt;

}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =  CountLessThanSix(iValue);
    printf("Frequency of Digit less than 6 is :%d\n",iRet);
    return 0;
}