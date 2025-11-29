#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if(ch=='!' || ch == '@' || ch=='#' ||ch == '$' || 
       ch== '%'|| ch == '^' || ch =='&'||ch =='*')
    {    
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf(" %c" , &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Special Character\n");
    }
    else
    {
        printf("It Is Not Special Character\n");
    }
    return 0;
}