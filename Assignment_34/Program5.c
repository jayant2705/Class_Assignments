#include<stdio.h>

void DiplayASCII(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    DiplayASCII(cValue);
    return 0;
}