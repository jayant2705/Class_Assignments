#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVoel(char *str)
{ 
    while(*str != '\0')
    {
        if(*str =='a' || *str == 'e' || *str == 'i' || *str == 'o' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O')
            {
                return TRUE;
            }
            str++;   
    }
    return FALSE;
     
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    bRet =  ChkVoel(Arr);
    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
         printf("FALSE\n");
    }

    return 0;
}