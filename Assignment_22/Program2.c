#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int evenCnt = 0, oddCnt = 0;

    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            evenCnt++;
        }
        else
        {
            oddCnt++;
        }
    }
    return evenCnt - oddCnt;   // difference
}

int main()
{
    int iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Frequency(p, iSize);

    printf("Difference between even and odd frequency is: %d\n", iRet);

    free(p);
    return 0;
}