/*
    Input :     N :         6
                Elements:   85   66   11  80  93  88
    Output :    11 is present
    
    Input :     N :         6
                Elements:   85   66   3  80  93  88
    Output :    11 is absent
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    BOOL bAns = FALSE;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] == 11))
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
    int iSize = 0,iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Frequency(iPtr,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(iPtr);

    return 0;
}