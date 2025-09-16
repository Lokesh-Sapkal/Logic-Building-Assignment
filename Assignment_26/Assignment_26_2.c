/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_26_2.c
//  Descirption :   Program to Check character and return it's frequency. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
                M
    Output :    2

    Input :     “MarvellouS Infosystems”
                W
    Output :    0
*/

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[40];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    printf("Enter character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Frequency of %c is: %d",cValue,iRet);

    return 0;
}