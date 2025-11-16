#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0, temp = 0, digit = 0;

    printf("Numbers containing digit 3 are:\n");

    for(i = 0; i < iLength; i++)
    {
        temp = Arr[i];

        while(temp != 0)
        {
            digit = temp % 10;

            if(digit == 3)
            {
                printf("%d ", Arr[i]);
                break;   
            }

            temp = temp / 10;
        }
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

    Digits(p, iSize);

    free(p);

    return 0;
}