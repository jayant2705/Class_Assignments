#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("%d is a leap yaer\n",year);
            }    
            else
            {
                printf("%d is not leap yaer\n",year);
            }
        }
        else
        {
            printf("%d is a leap yaer\n",year);
        }
    }
    else
    
    {
         printf("%d is not leap yaer\n",year);
    }
}
int main()
{
    int yr;
    printf("Enter Year\n");
    scanf("%d",&yr);
    CheckLeapYear(yr);
    return 0;
}