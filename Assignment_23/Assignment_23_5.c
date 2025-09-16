////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_23_5.c
//  Descirption :   Program to accept character and display its ASCII value in decimal,octal,hexadecimal.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input :                   A
    Output :    Decimal -     65
                Octal -       0101
                Hexadecimal - 0X41
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal -         %d\n",ch);   
    
    printf("Octal -           %o\n",ch);
    
    printf("Hexadecimal -     %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}