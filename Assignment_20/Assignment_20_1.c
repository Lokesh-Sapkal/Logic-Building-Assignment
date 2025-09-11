/*
    Input :     N : 6
                No : 66
                Elements : 12   66  87  46  90  66
    Output :    66 is present
    
    Input :     N : 6
                No : 13
                Elements : 12   66  87  46  90  66
    Output :    13 is absent
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkFrquency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    BOOL bAns = FALSE;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt != iLength)
    {
        bAns = TRUE;
    }

    return bAns;
}

int main()
{
    int iSize = 0,iValue = 0,iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = ChkFrquency(iPtr,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is absent\n",iValue);
    }

    free(iPtr);

    return 0;
}