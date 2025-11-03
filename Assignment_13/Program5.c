#include<stdio.h>

int sum_even_numbers(int limit)
{
    int sum = 0 , i = 0;
    for(i =1; i<= limit; i++)
    {
        sum = sum + (2*i);
    }
    return sum;
}
int main(void)
{
    int limit;
    printf("Enter Number\n");
    scanf("%d",&limit);

    printf("%d\n",sum_even_numbers(limit));
    return 0;
}