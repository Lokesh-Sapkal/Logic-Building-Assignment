////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_24_3.c
//  Descirption :   Program to display Diff. between freq. of samll and capital char.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////

/*
    Input :     "MarvellouS"
    Output :    6   (8-2)
*/

#include<stdio.h>

int Difference(char *ch)
{
    int iCount1 = 0,iCount2 = 0,iAns = 0;

    if(ch == NULL)
    {
        return;
    }

    while(*ch != '\0')
    {
        if((*ch >= 'a') && (*ch <= 'z'))
        {
            iCount1++;
        }
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            iCount2++;
        }
        ch++;
    }
    iAns = iCount1 - iCount2;

    return iAns;
}

int main()
{
    char arr[70];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference between frequency of small characters and capital characters is %d\n",iRet);

    return 0;
}