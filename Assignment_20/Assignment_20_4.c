/*
    Input :     N : 6
                Start : 60
                End : 90
                Elements : 12   66  87  46  90  66
    Output :    66  87  90  66
    
    Input :     N : 6
                Start : 30
                End : 50
                Elements : 12   66  3  78  90  66
    Output :    
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    printf("Elements in range is : ");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0,iValue1 = 0,iValue2 = 0,iCnt = 0;
    int *iPtr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending point: ");
    scanf("%d",&iValue2);

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

    Range(iPtr,iSize,iValue1,iValue2);

    free(iPtr);
    
    return 0;
}