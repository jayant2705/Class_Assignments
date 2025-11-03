#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int i = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    for(i = iEnd; i >= iStart; i--)
    {
       printf("%d\t",i); 
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);
    return 0;
}