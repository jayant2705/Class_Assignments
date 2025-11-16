 #include<stdio.h>
 #include<stdbool.h>
 #include<stdlib.h>

 bool Check(int Arr[], int iLength , int iNo)
 {
    int icnt = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] == iNo)
        {
            return true;
        }
    }
    return false;
 }

 int main()
 {
    int iSize = 0 , icnt = 0, iValue =0 , *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

     printf("Enter the number to find frequency: ");
    scanf("%d", &iValue);
    
    *ptr = (int*)malloc(iSize * sizeof(int));
    
    if(*ptr = NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter %d elements:\n", iSize);
    for(icnt = 0; icnt < iSize; icnt++)
    {
        scanf("%d", &ptr[icnt]);
    }
    
    bRet = Check(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("Output : TRUE\n");
    }
    else
    {
        printf("Output : FALSE\n");
    }
    
    free(ptr);
    return 0;
 }