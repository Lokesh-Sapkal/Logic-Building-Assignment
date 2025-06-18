//////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_2_3.c
//  Descirption :   Program to print "Hello" if no. is less than 10 otherwise print "Demo".
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}