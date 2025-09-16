//////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_24_5.c
//  Descirption :   Program to accept string and display it in reverse order.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
//////////////////////////////////////////////////////////////////////////////

/*
    Input :     "MarvellouS"
    Output :    "SuollevraM"
*/

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0,iCount = 0;
    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    str--;

    for(iCnt = 0;iCnt < iCount;iCnt++,str--)
    {
        printf("%c",*str);
    }
}

int main()
{
    char arr[40]; 

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    Reverse(arr); 

    return 0;
}