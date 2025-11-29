#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("Dec\tHex\tOct\tChar\n");
    printf("-----------------------------------------------");

    for(i = 0; i<= 255; i++)
    {
        printf("%3d\t%02X\t%03o\t%c\n",i,i,i,i);
    }

}
int main()
{

    DisplayASCII();

    return 0;
}