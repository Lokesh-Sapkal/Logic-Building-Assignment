/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_7_2.c
//  Descirption :   Program to accept Doller and print rupees.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 10$
// Output : 700 rupees
// Input : 3$
// Output : 270 rupees

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d rupees",iRet);

    return 0;
}