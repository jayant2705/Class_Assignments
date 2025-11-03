typedef int BOOL;
#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL chkVowel(char c)
{
    if(c =='a' || c=='e' || c=='i'|| c =='o' || c=='u' || c=='A'|| c =='E' || c=='I' || c=='O'|| c =='U')
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == cValue)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

    return 0;
}