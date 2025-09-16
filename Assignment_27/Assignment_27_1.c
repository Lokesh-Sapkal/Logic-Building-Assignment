/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_1.c
//  Descirption :   Program to copy the string in another string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    "Marvellous Multi OS"
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrCpyX(char *src, char *dest) 
{ 
    if((NULL == src))
    {
        return INVALID_INPUT;
    }

    while(*src != '\0') 
    { 
        *dest = *src; 
        src++; 
        dest++; 
    }
    *dest = *src;
} 

int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30] ;  

    StrCpyX(arr,brr); 

    printf("Anoter string : %s",brr);  

    return 0;
}