/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_7_1.c
//  Descirption :   Program to accept no. and display * and # of no. times. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : *   *   *   *   *   #   #   #   #   #

// Input : -5
// Output : *   *   *   *   *   #   #   #   #   #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
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