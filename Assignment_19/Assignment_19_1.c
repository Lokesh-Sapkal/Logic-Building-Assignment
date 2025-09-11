/*
    Input :     N :     6
                Elements: 85   66   3  80  93  88
    Output :    3
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0))
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountEven(iPtr,iSize);

    printf("Number of Even elements are : %d",iRet);

    free(iPtr);

    return 0;
}