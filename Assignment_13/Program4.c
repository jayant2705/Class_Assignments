#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int sum = 0 , i = 0;
    for(i =1; i<= limit; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int limit;
    printf("Enter Number\n");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));
    return 0;
}