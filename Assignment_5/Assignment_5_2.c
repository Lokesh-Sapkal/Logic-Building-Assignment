/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_5_2.c
//  Descirption :   Program to accept no. and display no till no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          23-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 8
// Output : 1   2   3   4   5   6   7   8

#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;
    
    iCnt = 1;
    while(iCnt <= iNO)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}