/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_27_2X.c
//  Descirption :   Program to copy the string in another string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
                10
    Output :    "Marvellous"
*/

#include<stdio.h>

#define INVALID_INPUT 1

int StrNCpyX(char *src, char *dest,int iNo)
{ 
    if(NULL == src)
    {
        return INVALID_INPUT;
    }

    int iCnt = 0;
    while((*src != '\0') && (iCnt < iNo)) 
    { 
        *dest = *src;
        src++; 
        dest++;
        iCnt++;
    }
    *dest = '\0';
} 

int main() 
{ 
    char arr[30] = {'\0'}; 
    char brr[30] = {'\0'};
    int iSize = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the size : ");
    scanf("%d",&iSize);

    StrNCpyX(arr,brr,iSize);

    printf("%s",brr);  

    return 0;
}