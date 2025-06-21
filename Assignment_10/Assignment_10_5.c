//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_10_5.c
//  Descirption :   Program to display diff. between sum of even digits and sum of odd digits.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : -15 (2 - 17)

// Input : 1018
// Output : 6   (8 - 2)

// Input : 8440
// Output : 16  (16 - 0)

// Input : 5733
// Output : -18 (0-18)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iEven = 0,iOdd = 0,iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iEven - iOdd;

    return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of Even and Odd Digits in %d is : %d",iValue,iRet);

    return 0;
}