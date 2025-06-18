/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_5.c
//  Descirption :   Program to check character is vowel(a,e,i,o,u) or not.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : E       Output : TRUE
// Input : d       Output : FALSE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue >= 'A') && (CValue <='Z'))
    {
        CValue = CValue + 32;
    }

    if(CValue == 'a' ||CValue == 'u' ||CValue == 'o' ||CValue == 'i' ||CValue == 'e')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}