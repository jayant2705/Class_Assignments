#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, temp = 0, sum = 0, digit = 0;

    printf("Summation of digits of each number:\n");

    for(i = 0; i < iLength; i++)
    {
        temp = Arr[i];
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        printf("%d ", sum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d numbers:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}