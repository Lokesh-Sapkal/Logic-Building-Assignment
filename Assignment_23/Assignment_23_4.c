///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_23_4.c
//  Descirption :   Program to check char. is special symbol or not.
//                                            (!,@,#,$,%,^,&,*)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : %
    Output : TRUE
    
    Input : m
    Output : FALSE
    
    Input : @
    Output : TRUE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bAns = FALSE;

    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        bAns = TRUE;
    }
    
    return bAns;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}