///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_1_2.c
//  Descirption :   Program to print 5 times "Marvellous"
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Prototype :     float Divide(int , int)
//  Description :   Function to print "Marvellous"
//  Input :         void
//  Output :        void
//
///////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;

    for(i = 1;i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}