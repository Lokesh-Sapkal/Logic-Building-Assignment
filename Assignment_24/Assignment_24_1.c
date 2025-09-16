////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_24_1.c
//  Descirption :   Program to accept character and count capital character.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////

/*
    Input :     "Marvellous Multi OS"
    Output :    4
*/

#include<stdio.h>

int CountCapital(char *ch)
{
    int iCount = 0;

    if(ch == NULL)
    {
        return;
    }

    while(*ch != '\0')
    {
        if((*ch >= 'A') && (*ch <= 'Z'))
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

    iRet = CountCapital(arr);

    printf("Number of capital char. in string is %d\n",iRet);

    return 0;
}