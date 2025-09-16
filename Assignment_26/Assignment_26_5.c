/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_26_5.c
//  Descirption :   Program to print reverse string. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "abcd"
    Output :    "dcba"

    Input :     "abba"
    Output :    "abba"
*/

#include<stdio.h>

int StrRevX(char *str)
{
    char cTemp = '\0';
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    for(;start <= end;start++,end--)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;
    }
}

int main()
{
    char arr[40];

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    StrRevX(arr);

    printf("Modified string is : %s",arr); 

    return 0;
}