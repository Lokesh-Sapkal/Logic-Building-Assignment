/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_26_3.c
//  Descirption :   Program to Check character and return it's index of first occurrence. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
                M
    Output :    0

    Input :     “MarvellouS Infosystems”
                W
    Output :    -1

    Input :     "Marvellous Multi OS"
                e
    Output :    4
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }
    
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCount;
    }
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

    iRet = FirstChar(arr,cValue);

    if(iRet == -1)
    {
        printf("Character not present");
    }
    else
    {
        printf("First occurrence of %c at index %d",cValue,iRet);
    }

    return 0;
}