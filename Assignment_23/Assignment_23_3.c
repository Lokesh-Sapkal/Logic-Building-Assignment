////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_23_3.c
//  Descirption :   Program to display char. till 'Z' if char is capital otherwise display tiil 'a'.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : Q
    Output : Q  R   S   T   U   V   W   X   Y   Z
    
    Input : m
    Output : m  l   k   j   i   h   g   f   e   d   c   b   a   
    
    Input : 8
    Output : 
*/

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
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