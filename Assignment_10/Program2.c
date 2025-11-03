
#include<stdio.h>

float Area(float fNo1, float fNo2)
{
    float fAns = 0;
    fAns = fNo1 * fNo2;
    return fAns;
}

int main()
{
    float fHeight = 0.0f;
    float fWidth = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Height : \n");
    scanf("%f", &fHeight);

    printf("Enter the Width : \n");
    scanf("%f", &fWidth);

    fArea = Area(fHeight, fWidth);

    printf("The Area is : %f\n", fArea);

    return 0;
}
