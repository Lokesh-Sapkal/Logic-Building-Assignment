///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_3.c
//  Descirption :   Program to check whether character is Digit or not(0-9)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          01-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : 7
    Output : TRUE
    
    Input : d
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char cAlpha)
{
    BOOL bValue = FALSE;

    if((cAlpha >= '0') && (cAlpha <= '9'))
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
    char iNo = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf("%c",&iNo);

    bRet = ChkDigit(iNo);

    if(bRet == TRUE)
    {
        printf("%c is Digit",iNo);
    }
    else
    {
        printf("%c is not a Digit",iNo);
    }

    return 0;
}