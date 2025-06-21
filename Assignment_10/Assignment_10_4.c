/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_10_4.c
//  Descirption :   Program to display multiplication of all digits. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 270

// Input : 1018
// Output : 8

// Input : 9440
// Output : 144

// Input : 922432
// Output : 864

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0,iMult = 0;

    iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all Digits in %d is : %d",iValue,iRet);

    return 0;
}