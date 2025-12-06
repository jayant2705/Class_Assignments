#include<stdio.h>

int CountChar(char *str,char ch)
{
     int icnt = 0;
     while(*str != '\0')
     {
        if(*str == ch)
        {
            icnt++;
        }
        str++;
     }

     return icnt;
}
int main()
{
    char arr[20];
    char ch;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character:\n");
    scanf(" %c", &ch);

    iRet = CountChar(arr , ch);

    printf("Character Frequency is %d ",iRet);

    return 0;
}