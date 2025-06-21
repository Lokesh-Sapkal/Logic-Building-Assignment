/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_9_2.c
//  Descirption :   Program to check whether No contains 0 in it or not.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : There is no Zero

// Input : 1018
// Output : It count Zero

// Input : 9000
// Output : It count Zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL iAns = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iNo != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int  main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}