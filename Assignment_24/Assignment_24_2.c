////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_24_2.c
//  Descirption :   Program to accept character and count small character.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous"
    Output :    9
*/

#include<stdio.h>

int CountSmall(char *ch)
{
    int iCount = 0;

    if(ch == NULL)
    {
        return;
    }

    while(*ch != '\0')
    {
        if((*ch >= 'a') && (*ch <= 'z'))
        {
            iCount++;
        }
        ch++;
    }

    return iCount;
}

int main()
{
    char arr[70];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Number of small char. in string is %d\n",iRet);

    return 0;
}