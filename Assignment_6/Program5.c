#include<stdio.h>

float Percentage(int total,int obtained)
{
    if(total == 0)
    return 0.0;

    float percent = ((float)obtained / total) * 100;
    return percent;
}



int main()
{
    int iValue1 = 0, iValue2 =0;
    float fRet = 0.0;

    printf("Please Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is %f\n",fRet);

    return 0;
}