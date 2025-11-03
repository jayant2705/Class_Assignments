#include<stdio.h>

int FindLargest(int x,int y,int z)
{
     if(x >= y && x>=z)
     {
        return x;
     }
     else if( y >= x && y>= z)
     {
        return y;
     }
     else
     {
        return z;
     }
}

int main()
{
    int a,b,c;
    printf("Enter Three Number\n");
    scanf("%d %d %d",&a,&b,&c);

    FindLargest(a,b,c);
    printf("Largest number is\n",FindLargest(a,b,c));
    return 0;
}