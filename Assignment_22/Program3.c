#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int evenCnt = 0, oddCnt = 0;

    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
             return true;
        }
    }
    return  false;
}

int main()
{
    int iSize = 0, bRet = false, icnt = 0;
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

    for(icnt = 0; icnt < iSize; icnt++)
    {
        scanf("%d", &p[icnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Not Present\n");
    }

    free(p);
    return 0;
}