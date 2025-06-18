/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_4.c
//  Descirption :   Program to change the case of character(Using in-built function)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : a       Output : A
// Input : D       Output : d

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
    if(CValue == toupper(CValue))
    {
        printf("%c",tolower(CValue));
    }
    else if(CValue == tolower(CValue))
    {
        printf("%c",toupper(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}