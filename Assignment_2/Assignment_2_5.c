///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_2_5.c
//  Descirption :   Program to Check whether no. is even or not
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    BOOL bValue = FALSE;

    if((iNo % 2) == 0)
    {
        bValue = TRUE;
    }
    else
    {
        bValue = FALSE;
    }
    return bValue;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is a even number",iValue);
    }
    else
    {
        printf("%d is not even number",iValue);
    }

    return 0;
}