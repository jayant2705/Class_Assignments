#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int i;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }
    for(i = iStart; i<= iEnd; i++)
    {
        if( i % 2== 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}