/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_25_5.c
//  Descirption :   Program to accept string and  count number of white spaces 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :  "MarvellouS"
    Output :  0

    Input :   “MarvellouS Infosystems”
    Output :   1
    
    Input :   “MarvellouS Infosystems by Piyush Manohar Khairnnar”
    Output :   5
*/

#include<stdio.h>

int CountWhite(char *ch)
{
    int iCount = 0;

    while(*ch != '\0')
    {
        if(*ch == ' ')
        {
            iCount++;
        }
        ch++;
    }
    
    return iCount;
}

int main()
{
    char arr[40];
    int iRet = 0;

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    iRet = CountWhite(arr);

    printf("white spaces in the array is: %d",iRet);

    return 0;
}