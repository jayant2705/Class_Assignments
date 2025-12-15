#include<stdio.h>
 
void Display(int iNo)
{
    static i = 1;
    if(i > iNo)
    {
        return;
    }

    printf("%d\t",i);
    i++;
    Display(iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}