//////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_25_2.c
//  Descirption :   Program to accept string and convert it into upper case.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
//////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    MARVELLOUS MULTI OS
*/

#include<stdio.h>

void struprx(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= 'a') && (*ch <= 'z'))
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

    struprx(arr);

    printf("Modified string is : %s",arr); 

    return 0;
}