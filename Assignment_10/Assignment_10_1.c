////////////////////////////////////////////////////
//
//  Name :          Assignment_10_1.c
//  Descirption :   Program to count even digits.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
///////////////////////////////////////////////////

// Input : 2395
// Output : 1

// Input : 1018
// Output : 2

// Input : -1018
// Output : 2

// Input : 8462
// Output : 4

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iDigit = 0,iCount = 0;

    // if(iNo < 0)
    // {
    //     iNo = -iNo;
    // }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("Number of Even Digit in %d is : %d",iValue,iRet);

    return 0;
}