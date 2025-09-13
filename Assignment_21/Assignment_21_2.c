/*
    Input :     N : 6
                Elements : 15   66  3  46  90  66
    Output :    3
    
    Input :     N : 6
                Elements : 12   66  2  78  60  66
    Output :    2
*/

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt = 0,iSmall = 0;

    for(iCnt = 0,iSmall = Arr[iCnt];iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    
    return iSmall;
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

    iRet = Minimum(iPtr,iSize);

    printf("Smallest Number is: %d",iRet);

    free(iPtr);
    
    return 0;
}