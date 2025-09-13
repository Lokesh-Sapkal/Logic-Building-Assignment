///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_4.c
//  Descirption :   Program to check whether character is Small or not(a-z)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          01-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : g
    Output : TRUE
    
    Input : D
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char cAlpha)
{
    BOOL bValue = FALSE;

    if((cAlpha >= 'a') && (cAlpha <= 'z'))
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
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf("%c",&ch);

    bRet = ChkSmall(ch);

    if(bRet == TRUE)
    {
        printf("%c is Small case Character",ch);
    }
    else
    {
        printf("%c is not a Small case Character",ch);
    }

    return 0;
}