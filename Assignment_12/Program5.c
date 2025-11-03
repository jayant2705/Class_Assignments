#include<stdio.h>
#include<stdbool.h>

bool is_Divisible_by_five(int number)
{

    return (number % 5 == 0);
}
int main(void)
{
    int number;

    printf("Enter Number\n");

    scanf("%d",&number);
    printf("%s\n",is_Divisible_by_five(number) ? "Yes" : "No");

    return 0;
}