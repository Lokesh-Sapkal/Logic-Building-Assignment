///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_1_5.c
//  Descirption :   Program to print number of * on screen(Using for loop)
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}