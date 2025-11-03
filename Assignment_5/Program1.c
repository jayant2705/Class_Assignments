#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2 ==0)
    {
        printf("%d is Even\n",num);
    }
    else
    {
        printf("%d is Odd\n",num);
    }
}
int main()
{
    int number;
    printf("Enter Number\n");
    scanf("%d",&number);
    CheckEvenOdd(number);
    return 0;
}