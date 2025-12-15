#include<stdio.h>
 
void Display(int count)
{
    if(count == 0)
    {
        return;
    }

        printf("*\t");
    Display(count - 1);
}

int main()
{
    Display(5);
    return 0;
}