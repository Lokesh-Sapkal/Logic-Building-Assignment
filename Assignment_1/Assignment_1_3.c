///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_1_3.c
//  Descirption :   Program to print 5 to 1 number on screen
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while (i > 0)
    {
        printf("%d\n",i);
        i--;
    }
    
//     for(i = 5;i > 0;i--)
//     {
//         printf("%d\n",i);
//     }
}

int main()
{
    Display();

    return 0;
}