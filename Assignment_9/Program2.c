
#include<stdio.h>

int DollerConvert(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}

int main()
{
    int iDoller = 0;
    int iRupees = 0;

    printf("Enter the Dollers : \n");
    scanf("%d", &iDoller);

    iRupees = DollerConvert(iDoller);

    printf("Rs = %d", iRupees);

    return 0;
}
