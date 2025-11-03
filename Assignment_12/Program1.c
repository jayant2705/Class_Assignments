#include<stdio.h>
void Print_Factors(int number)
{

    int i = 0;
    
    printf("Factors of %d: ",number);
     
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d",i);
        }
    }
     printf("\n");
}
int main()
{
    int number;

    printf("enter number\n");
    scanf("%d",&number);
    Print_Factors(number);

    return 0;
}