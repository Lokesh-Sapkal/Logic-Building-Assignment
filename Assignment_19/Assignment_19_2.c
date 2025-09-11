/*
    Input :     N :     7
                Elements: 85   66   3  80  93  88   90
    Output :    1  (4 - 3)
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0,iEven = 0,iOdd = 0,iDiff = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0))
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *iPtr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element : \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Frequency(iPtr,iSize);

    printf("Difference between frequency of even and odd no. are : %d",iRet);

    free(iPtr);

    return 0;
}