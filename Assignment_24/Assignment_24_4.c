////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_24_4.c
//  Descirption :   Program to accept string and check whether it contains vowels or not.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous"
    Output :    TRUE

    Input :     "Demo"
    Output :    TRUE

    Input :     "xyz"
    Output :    FALSE
*/

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkVowel(char *ch)
{
    int iCount1 = 0;
    BOOL bAns = FALSE;

    if(ch == NULL)
    {
        return;
    }

    while(*ch != '\0')
    {
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            ch = ch + 32;
        }
        if((*ch == 'a') || (*ch == 'u') || (*ch == 'o') || (*ch == 'i') || (*ch == 'e'))
        {
            bAns = TRUE;
            break;
        }
        ch++;
    }

    return bAns;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE) 
    { 
        printf("Contains Vowel"); 
    } 
    else 
    { 
        printf("There is no Vowel"); 
    }
    return 0;
}