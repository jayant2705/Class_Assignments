#include<stdio.h>

int Difference(char *str)
{
    int icnt1 = 0;
    int icnt2 = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str  <= 'z')
        {
            icnt1++; 
        }
        else if(*str >= 'A' && *str  <= 'Z')
        {
            icnt2++; 
            
        }
        str++;
    }
    return icnt1 - icnt2 ;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}