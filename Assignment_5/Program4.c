#include<stdio.h>

void CheckNumber(int num)
{
    if(num > 0)
    {
        printf("%d is positive\n",num);
    }
    else if(num < 0) 
    {
           printf("%d is negative\n",num);
    }
    else
    {
        printf("%d is Zero\n",num);
    }

}
int main()
{
    int number;
    printf("enter Number\n");
    scanf("%d",&number);
    CheckNumber(number);
    return 0;
}