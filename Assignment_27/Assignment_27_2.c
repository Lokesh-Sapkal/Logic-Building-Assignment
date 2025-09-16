/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_2.c
//  Descirption :   Program to copy the string in another string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
                10
    Output :    "Marvellous "
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrNCpyX(char *src, char *dest,int iCnt)
{ 
    if(NULL == src)
    {
        return INVALID_INPUT;
    }

    while((*src != '\0') && (iCnt != 0)) 
    { 
        *dest = *src;
        src++; 
        dest++;
        iCnt--;
    }
    *dest = '\0';
} 

int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30];  

    StrNCpyX(arr,brr,30);

    printf("%s",brr);  

    return 0;
}