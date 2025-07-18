///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_2_2.c
//  Descirption :   Program to print number of * on screen(Using while loop(reverse))
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}