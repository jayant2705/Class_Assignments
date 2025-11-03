#include<stdio.h>
 void print_odd_numbers(int limit)
 {
    for(int i = 1; i<= limit; i += 2)
    {
         printf("%d",i);
    }
    printf("\n");
 }
int main()
{
    int limit;

    printf("Enter number\n");

    scanf("%d",&limit);
    print_odd_numbers(limit);
    return 0;
}