#include<stdio.h>
int Sum_of_Even_Factors(int number)
{

    int sum = 0;
     
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0 && i % 2 ==0)
        {
            sum+=i;
        }
    }
      return sum;
}
int main()
{
    int number;

    printf("Enter Number\n");
    scanf("%d",&number);
    printf("%d\n",Sum_of_Even_Factors(number));

    return 0;
}