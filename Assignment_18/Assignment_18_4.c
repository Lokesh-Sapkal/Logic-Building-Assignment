/*
    Input :     N :     6
                Elements: 85   66   3  15  93  88
    Output : 15
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    printf("Elements that are divisible by 3 and 5 is : ");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(((Arr[iCnt] % 3) == 0) && (Arr[iCnt] % 5) == 0)
        {
            printf("%d\t",Arr[iCnt]);
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

    printf("Enter %d element : \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    Display(iPtr,iSize);

    free(iPtr);

    return 0;
}