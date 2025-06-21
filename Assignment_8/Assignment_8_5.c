/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_8_5.c
//  Descirption :   Program to convert area in square feet into square meter.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 0.464515
// Input : 7
// Output : 0.650321

#include<stdio.h>

double SquareMeter(int iNo)
{
    double iAns = 0.0 ;

    iAns = (iNo * 0.0929);

    return iAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf ",dRet);

    return 0;
}