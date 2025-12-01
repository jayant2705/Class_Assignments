#include<stdio.h>

int CountCapital(char *str)
{
    int icnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str  <= 'Z')
        {
            icnt++; 
        }
        str++;
    }
    return icnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;
}