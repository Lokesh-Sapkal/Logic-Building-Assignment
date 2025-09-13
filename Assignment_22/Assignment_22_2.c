///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_2.c
//  Descirption :   Program to check whether character is Capital or not(A-Z)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          01-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : F
    Output : TRUE
    
    Input : d
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char cAlpha)
{
    BOOL bValue = FALSE;

    if((cAlpha >= 'A') && (cAlpha <= 'Z'))
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

    bRet = ChkCapital(ch);

    if(bRet == TRUE)
    {
        printf("%c is Capital Character",ch);
    }
    else
    {
        printf("%c is not a Capital Character",ch);
    }

    return 0;
}