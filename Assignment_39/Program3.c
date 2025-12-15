#include<stdio.h>

void Display(int i)
{
    if(i == 0)
    {
        return;
    }

    printf("%d\t",i);
    Display(i - 1);
}

int main()
{
    Display(5);
    return 0;
}