/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_26_1.c
//  Descirption :   Program to Check whether character is present in string or not. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "MarvellouS"
                e
    Output :    TRUE

    Input :     “MarvellouS Infosystems”
                W
    Output :    FALSE
*/

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    BOOL bValue = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bValue = TRUE;
            break;
        }
        str++;
    }
    return bValue;
}

int main()
{
    char arr[40];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    printf("Enter character: ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("%c is present",cValue);
    }
    else
    {
        printf("%c is not present",cValue);
    }

    return 0;
}