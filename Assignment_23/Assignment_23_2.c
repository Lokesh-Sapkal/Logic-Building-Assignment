///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_23_2.c
//  Descirption :   Program to change case and display it.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : Q
    Output : q
    
    Input : m
    Output : M
    
    Input : %
    Output : %
*/

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("Changed character is: %c",ch);
    }
    
    else if((ch >= 'a') && (ch <= 'z'))
    {
       ch = ch - 32;
        printf("Changed character is: %c",ch);
    }

    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}