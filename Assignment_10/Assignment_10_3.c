/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_10_3.c
//  Descirption :   Program to count of digits in between 3 and 7.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 1

// Input : 1018
// Output : 0

// Input : 4521
// Output : 2

// Input : 9922
// Output : 0

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Number of Digit which is in between 3 and 7 in %d is : %d",iValue,iRet);

    return 0;
}