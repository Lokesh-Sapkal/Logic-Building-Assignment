/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_5.c
//  Descirption :   Program to concat two string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Infosystems"
                "Logic Building"
    Output :    "Marvellous Infosystems Logic Building"
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrCatX(char *src, char *dest)
{ 
    if(NULL == src)
    {
        return INVALID_INPUT;
    }

    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
    
    while(*dest != '\0') 
    { 
        *src = *dest;
        *dest++;
        *src++;
    }
    *src = *dest;
} 

int main() 
{ 
    char arr[50] = "Marvellous Infosystems"; 
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);  

    return 0;
}