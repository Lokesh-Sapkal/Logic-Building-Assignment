///////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_4_5.c
//  Descirption :   Program to print Difference between sum of Factorial and Non Factorial
//  Author :        Lokesh Sanjay Sapkal
//  Date :          22-05-2025
//
//////////////////////////////////////////////////////////////////////////////////////////

// Input : 12
// Output : -34 (16 - 50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0,iDiff = 0,iSum = 0,iNonSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonSum = iNonSum + iCnt;
        }
    }
   
    iDiff = iSum - iNonSum;
    
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}