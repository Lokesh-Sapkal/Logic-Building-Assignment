//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_5_3.c
//  Descirption :   Program to accept no. and display no. line for both side(-ve,+ve) till that no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          23-05-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

// Input : 4
// Output : -4  -3  -2  -1   0   1   2   3   4

#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    for(iCnt = -iNO;iCnt <= iNO;iCnt++)
    {
        printf("%d\t",iCnt);
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