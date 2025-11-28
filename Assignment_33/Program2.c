#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char *ch)
{
        if(*ch >= 'A' && *ch <= 'Z')
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
     char Arr[50] = {'\0'};
     BOOL bRet = FALSE; 

     printf("Enter Character :\n");
     scanf("%[^'\n']c",Arr);

     bRet = ChkAlpha(Arr);

     if(bRet == TRUE)
     {
        printf("TURE\n");
     }
     else
     {
        printf("FALSE\n");
     }
     return 0;
}