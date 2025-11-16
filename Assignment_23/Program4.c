 #include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid range! Start should be less than or equal to End.\n");
        return;
    }
    
    printf("Elements in range %d to %d: ", iStart, iEnd);
    
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    printf("Enter the starting point: ");
    scanf("%d", &iValue1);
    
    printf("Enter the ending point: ");
    scanf("%d", &iValue2);
    
    if(iSize <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    
    Range(p, iSize, iValue1, iValue2);
    
    free(p);
    
    return 0;
}