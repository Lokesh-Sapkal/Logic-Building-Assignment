/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_7_5.c
//  Descirption :   Program to print Difference between even and odd factorial.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : -7  (8 - 15)

// Input : -5
// Output : -7  (8 - 15)

// Input : 10
// Output :  2895   (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0,iEven = 0,iOdd = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo,iEven = 1,iOdd = 1;iCnt >= 1;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEven = iEven * iCnt;
        }
        
        if((iCnt % 2) != 0)
        {
            iOdd = iOdd * iCnt;
        }   
    }
    iAns = iEven - iOdd;
    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}