/*
    Input :     N : 6
                Elements : 15   66  3  46  90  66
    Output :    45
    
    Input :     N : 6
                Elements : 12   66  2  78  90  66
    Output :    0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0,iMult = 0;

    for(iCnt = 0,iMult = 1;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }

    if(iMult == 1)
    {
        iMult = 0;
    }
    
    return iMult;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d numbers\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Product(iPtr,iSize);

    printf("Product of all odd no. is: %d",iRet);

    free(iPtr);
    
    return 0;
}