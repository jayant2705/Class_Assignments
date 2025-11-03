#include<stdio.h>
int Count_Factors(int number)
{

    int count = 0;
     
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }
      return count;
}
int main()
{
    int number;

    printf("enter number\n");
    scanf("%d",&number);
    printf("%d\n",Count_Factors(number));

    return 0;
}