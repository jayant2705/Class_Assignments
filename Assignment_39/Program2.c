#include<stdio.h>
 
void Display(int i)
{
    if(i > 5)
    {
        return;
    }

    printf("%d\t",i);
    Display(i + 1);
}

int main()
{
    Display(1);
    return 0;
}