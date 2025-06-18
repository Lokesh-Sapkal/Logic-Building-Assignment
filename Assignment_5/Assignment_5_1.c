/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_5_1.c
//  Descirption :   Program to accept no. and display Pattern like "$  *" no. of times
//  Author :        Lokesh Sanjay Sapkal
//  Date :          23-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : $   *   $   *   $   *   $   *   $   *

#include<stdio.h>

void Pattern(int iNO)
{
    int iCnt = 0;
    
    iCnt = 1;
    while(iCnt <= iNO)
    {
        printf("$\t");
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}