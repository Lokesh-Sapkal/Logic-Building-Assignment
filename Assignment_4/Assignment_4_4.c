////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_4_4.c
//  Descirption :   Program to print summation of non factorial of no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          22-05-2025
//
////////////////////////////////////////////////////////////////////

// Input : 12
// Output : 50

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}