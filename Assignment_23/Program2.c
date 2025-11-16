#include<stdio.h>
#include<stdlib.h>

int FirstOccurrence(int Arr[], int iLength, int iNo)
{
    int i = 0;
    
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;   
        }
    }
    return -1;  
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    printf("Enter the number: ");
    scanf("%d", &iValue);
    
    p = (int*)malloc(iSize * sizeof(int));
    
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
    
    iRet = FirstOccurrence(p, iSize, iValue);
    
    if(iRet == -1)
    {
        printf("Output: -1\n");
    }
    else
    {
        printf("Output: %d\n", iRet);
    }
    
    free(p);
    
    return 0;
}