
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    char *Num[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};


    if(iCnt = 1 && iCnt < iNo)
    {
        printf("%s\t", Num[iNo - 1]);
    }
    else
    {
        printf("Invalid number");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}
