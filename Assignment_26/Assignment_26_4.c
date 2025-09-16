/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_26_4.c
//  Descirption :   Program to Check character and return it's index of last occurrence. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
                M
    Output :    11

    Input :     “MarvellouS Infosystems”
                W
    Output :    -1

    Input :     "Marvellous Multi OS"
                e
    Output :    4
*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCount = 0,iNo = 0;
    iNo = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iNo = iCount;
        }
        iCount++;
        str++;
    }
    
    if(iNo == -1)
    {
        return -1;
    }
    else
    {
        return iNo;
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

    iRet = LastChar(arr,cValue);

    if(iRet == -1)
    {
        printf("Character not present");
    }
    else
    {
        printf("Last index of %c is: %d",cValue,iRet);
    }

    return 0;
}