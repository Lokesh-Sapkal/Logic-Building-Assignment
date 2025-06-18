/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_6_3.c
//  Descirption :   Program to accept no. and print Multiplication of Factorial of no. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 120     (5 * 4 * 3 * 2 * 1)

// Input : -5
// Output : 120     (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = 1;
    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}