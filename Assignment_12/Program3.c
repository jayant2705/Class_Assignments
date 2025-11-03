#include<stdio.h>
int Sum_of_Factors(int number)
{

    int sum = 0;
     
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            sum+=i;
        }
    }
      return sum;
}
int main(void)
{
    int number;

    printf("enter number\n");
    scanf("%d",&number);
    printf("%d\n",Sum_of_Factors(number));

    return 0;
}