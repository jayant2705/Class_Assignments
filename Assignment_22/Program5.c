#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;
    int *ptr = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    printf("Enter the number to find frequency: ");
    scanf("%d", &iValue);
    
    ptr = (int*)malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = Frequency(ptr, iSize, iValue);
    
    printf("Frequency of %d is: %d\n", iValue, iRet);
    
    free(ptr);
    
    return 0;
}