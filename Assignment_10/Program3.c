
#include<stdio.h>

float MeterConverter(float fNo)
{
    float fAns = 0;
    fAns = fNo * 1000;
    return fAns;
}

int main()
{
    float fKilometer = 0.0f;
    float fMeter = 0.0f;

    printf("Enter the kilometers : \n");
    scanf("%f", &fKilometer);

    fMeter = MeterConverter(fKilometer);

    printf("Meter value : %f\n", fMeter);

    return 0;
}
