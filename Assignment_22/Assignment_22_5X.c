///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_22_5X.c
//  Descirption :   Program to Display exem timing based on division
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
    
    if(chDiv == 'A')
    {
        printf("Your exem at 7.00 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exem at 8.30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exem at 9.20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your exem at 10.30 AM");
    }
    else
    {
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