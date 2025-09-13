/*
    Input :     N : 6
                Elements : 8225    665  3   76  953  858
    Output :    17  17  3   13  17  21
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt1 = 0,iCnt2 = 0,iDigit = 0,iSum = 0;

    for(iCnt1 = 0;iCnt1 < iLength;iCnt1++,iSum = 0)
    {
        while(Arr[iCnt1] != 0)
        {
            iDigit = Arr[iCnt1] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt1] = Arr[iCnt1] / 10;
        }
        printf("%d\t",iSum);
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

    DigitsSum(iPtr,iSize);

    free(iPtr);
    
    return 0;
}