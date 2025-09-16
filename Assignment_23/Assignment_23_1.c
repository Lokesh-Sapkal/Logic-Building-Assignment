///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_23_1.c
//  Descirption :   Program to Display ASCII table from 0 to 255
//  Author :        Lokesh Sanjay Sapkal
//  Date :          03-06-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iNo = 0;

    for(iNo = 0;iNo <= 255;iNo++)
    {
        printf("\nChar:%c\tDec:%d\tHex:%x\tOct:%o\n",iNo,iNo,iNo,iNo);
        printf("-----------------------------------");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}