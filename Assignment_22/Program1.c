#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int i = 0 , icnt = 0;
    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[i] % 2 == 0)
        {
            icnt++;
        }
        
    }
    return icnt;
}
int main()
{
    int iSize = 0, iRet = 0 , i = 0;
    int *p = NULL;

    printf("Enter a Number of Elements \n");
    scanf("%d",iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Enable to Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements",iSize);

    for(i = 0; i < iSize; i++)
    {
        printf("Enter Element : %d",i+ 1);
        scanf("%d",&p[i]);
    }
    iRet = CountEven(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}