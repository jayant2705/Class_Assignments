
#include<stdio.h>

float CelciusConverter(float fNo)
{
    float fAns = 0.0f;
    fAns = ((fNo - 32) * (5.0/9.0));   //Need to remember

    if(fAns < 0)
    {
        return fAns;
    }

    return fAns;
}

int main()
{
    float fFahrenheit = 0.0f;
    float fCelcius = 0.0f;

    printf("Enter the temperature in Fahrenheit : \n");
    scanf("%f", &fFahrenheit);

    fCelcius = CelciusConverter(fFahrenheit);

    printf("The temperature is : %f\n", fCelcius);

    return 0;
}
