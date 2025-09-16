/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_4.c
//  Descirption :   Program to copy the small character in another string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous multi OS"
    Output :    "arvellous multi"
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrCpySmall(char *src, char *dest)
{ 
    if(NULL == src)
    {
        return INVALID_INPUT;
    }

    while(*src != '\0') 
    { 
        if((*src >= 'a') && (*src <= 'z'))
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
    char arr[30] = "Marvellous multi OS"; 
    char brr[30];  

    StrCpySmall(arr,brr);

    printf("%s",brr);  

    return 0;
}