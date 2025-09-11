/*
    Input :     N : 6
                No : 66
                Elements : 12   66  87  46  90  66
    Output :    5
    
    Input :     N : 6
                No : 90
                Elements : 12   66  87  46  90  66
    Output :    4
    
    Input :     N : 6
                No : 13
                Elements : 12   66  87  46  90  66
    Output :    -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iOcc = 0;

    iOcc = -1;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iOcc = iCnt;
        }
    }

    return iOcc;
}

int main()
{
    int iSize = 0,iValue = 0,iCnt = 0,iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter number to check: ");
    scanf("%d",&iValue);

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

    iRet = LastOcc(iPtr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occurance of %d at index : %d",iValue,iRet);
    }

    free(iPtr);
    
    return 0;
}