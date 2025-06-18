///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_2_1.c
//  Descirption :   Program to print number of * on screen(Using while loop)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
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