/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_9_5.c
//  Descirption :   Program to count frequency of such a digits which are less than 6.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 3

// Input : 1018
// Output : 3

// Input : 9440
// Output : 3

// Input : 96672
// Output : 1

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of number which is less than 6 in %d is: %d",iValue,iRet);

    return 0;
}