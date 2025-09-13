///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_1.c
//  Descirption :   Program to check whether character is alphabet or not(A-Z a-z)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          01-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : F
    Output : TRUE
    
    Input : &
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlphabet(char cAlpha)
{
    BOOL bValue = FALSE;

    if((cAlpha >= 'a') && (cAlpha <= 'z') || (cAlpha >= 'A') && (cAlpha <= 'Z'))
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

    bRet = ChkAlphabet(ch);

    if(bRet == TRUE)
    {
        printf("%c is character",ch);
    }
    else
    {
        printf("%c is not a character",ch);
    }

    return 0;
}