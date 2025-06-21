/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_9_3.c
//  Descirption :   Program to count frequency of 2 in Number.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 1

// Input : 1018
// Output : 0

// Input : 922432
// Output : 3

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int  main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 in %d is: %d",iValue,iRet);

    return 0;
}