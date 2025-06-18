/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_7_4.c
//  Descirption :   Program to print Multiplication of odd factorial.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 15  (5 * 3 * 1)

// Input : -5
// Output : 15  (5 * 3 * 1)

// Input : 10
// Output :  945    (9 * 7 * 5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo,iAns = 1;iCnt >= 1;iCnt--)
    {
        if((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial  number is %d",iRet);

    return 0;
}