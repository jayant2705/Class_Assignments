#include<stdio.h>

void Display(char ch)
{
    int icnt = 0;
    if(ch >= 'A' && ch <='Z')
    {
        
        for(icnt = ch; icnt <= 'Z'; icnt++)
        {
            printf("%c\n",icnt);
        }
    }
        else if(ch >= 'a' && ch <='z') 
        {
            for(icnt = ch; icnt >= 'a'; icnt--)
            {
              printf("%c\n",icnt);   
            }
        }
} 

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}