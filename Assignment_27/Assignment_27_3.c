/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_3.c
//  Descirption :   Program to copy the capital character in another string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    "MMOS"
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrCpyCap(char *src, char *dest)
{ 
    if(NULL == src)
    {
        return INVALID_INPUT;
    }

    while(*src != '\0') 
    { 
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            *dest++;
        }
        *src++;
    }
    *dest = *src;
} 

int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30];  

    StrCpyCap(arr,brr);

    printf("%s",brr);  

    return 0;
}