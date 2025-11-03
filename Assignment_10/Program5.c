
#include<stdio.h>

float SqMeterConverter(float fNo)
{
    float fAns = 0;
    fAns = fNo * 0.0929;
    return fAns;
}

int main()
{
    float fSqfeet = 0.0f;
    float fSqmeter = 0.0f;

    printf("Enter the Squeare feet : \n");
    scanf("%f", &fSqfeet);

    fSqmeter = SqMeterConverter(fSqfeet);

    printf("the area in square Meter is : %f\n", fSqmeter);

    return 0;
}
