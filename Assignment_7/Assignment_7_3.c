/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_7_3.c
//  Descirption :   Program to print Multiplication of even factorial.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 8   (4 * 2)

// Input : -5
// Output : 8   (4 * 2)

// Input : 10
// Output :  3840   (10 * 8 * 6 * 4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo,iAns = 1;iCnt >= 1;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iAns = iAns * iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}