/*
    Input :     N : 6
                Elements : 8225    665  3   76  953  858
    Output :    665   953   858
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0,iNo = 0;

    printf("Three digits number are : ");
    for(iCnt = 0;iCnt < iLength;iCnt++,iCount = 0)
    {
        iNo = Arr[iCnt];
        while(Arr[iCnt] != 0)
        {
            Arr[iCnt] = Arr[iCnt] / 10;
            iCount++;
        }
        if(iCount == 3)
        {
            printf("%d\t",iNo);
        }
    }
}

int main()
{
    int iSize = 0,iCnt = 0;
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

    Digits(iPtr,iSize);

    free(iPtr);
    
    return 0;
}