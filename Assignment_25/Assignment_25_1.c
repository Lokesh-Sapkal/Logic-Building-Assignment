//////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_25_1.c
//  Descirption :   Program to accept string and convert it into lower case.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
//////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    marvellous multi os 
*/

#include<stdio.h>

void strlwrx(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            *ch = *ch + 32;
        }
        ch++;
    }
}

int main()
{
    char arr[40];

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    strlwrx(arr);

    printf("Modified string is : %s",arr); 

    return 0;
}