//////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_25_3.c
//  Descirption :   Program to accept string and toggle the case.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
//////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    mARVELLOUS mULTI os
*/

#include<stdio.h>

void strtogglex(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            *ch = *ch + 32;
        }
        else if((*ch >= 'a') && (*ch <= 'z'))
        {
            *ch = *ch - 32;
        }
        ch++;
    }
}

int main()
{
    char arr[40];

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    strtogglex(arr);

    printf("Modified string is %s",arr); 

    return 0;
}