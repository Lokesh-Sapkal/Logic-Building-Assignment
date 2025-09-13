///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_5.c
//  Descirption :   Program to Display exam timing based on division
//  Author :        Lokesh Sanjay Sapkal
//  Date :          01-06-2025
//
///////////////////////////////////////////////////////////////////

/*
    Input : C
    Output : Your exem at 9.20 AM
    
    Input : d
    Output : Your exem at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv >= 'a') && (chDiv <= 'z'))
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
        printf("Your exem at 7.00 AM");
        break;

        case 'B':
        printf("Your exem at 8.30 AM");
        break;

        case 'C':
        printf("Your exem at 9.20 AM");
        break;

        case 'D':
        printf("Your exem at 10.30 AM");
        break;

        default:
        printf("Invalid Division");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character: ");
    scanf("%c",&ch);

    DisplaySchedule(ch);

    return 0;
}