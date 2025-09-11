/*
    Input :     N :         6
                No :        66
                Elements:   85   66   3  66  93  88
    Output :    2
    
    Input :     N :         6
                No :        12
                Elements:   85   66   3  80  93  88
    Output :    0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0,iValue = 0,iCnt = 0,iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter number that you want to search: ");
    scanf("%d",&iValue);

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

    iRet = Frequency(iPtr,iSize,iValue);

    printf("Frequency of %d is : %d",iValue,iRet);

    free(iPtr);

    return 0;
}