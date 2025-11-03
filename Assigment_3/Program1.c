#include<stdio.h>

void PrintEven(int iNo)
{
     if(iNo <=0)
     {
        return;
     }

     int icnt =0;
     for(icnt = 1; icnt <=iNo; icnt++)
     {
        printf("%d",icnt * 2);
     }
}
int main()
{
    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}