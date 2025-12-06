#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int  BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is Found\n");
    }
    else
    {
        printf("Character is Not Found\n");
    }
    return 0;
}