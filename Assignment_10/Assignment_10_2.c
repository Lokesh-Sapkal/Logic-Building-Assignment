///////////////////////////////////////////////////
//
//  Name :          Assignment_10_2.c
//  Descirption :   Program to count of odd digits.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
//////////////////////////////////////////////////

// Input : 2395
// Output : 3

// Input : 1018
// Output : 2

// Input : -1018
// Output : 2

// Input : 8462
// Output : 0

#include<stdio.h>

int CountOddDigit(int iNo)
{
    int iDigit = 0,iCount = 0;

    // if(iNo < 0)
    // {
    //     iNo = -iNo;
    // }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
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

    iRet = CountOddDigit(iValue);

    printf("Number of Odd Digit in %d is : %d",iValue,iRet);

    return 0;
}