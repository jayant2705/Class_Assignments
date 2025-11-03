
#include<stdio.h>

float Area(float fNo)
{
    float fAns = 0;
    fAns = fNo * fNo * 3.14;
    return fAns;
}

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Radius : \n");
    scanf("%f", &fRadius);

    fArea = Area(fRadius);

    printf("The Area is : %f\n", fArea);

    return 0;
}
