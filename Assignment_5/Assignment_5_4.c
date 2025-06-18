/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_5_4.c
//  Descirption :   Program to accept no. and display display odd no. till that no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          23-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 18
// Output : 1   3   5   7   9   11  13  15  17

#include<stdio.h>

void OddDisplay(int iNO)
{
    int iCnt = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    for(iCnt = 1;iCnt <= iNO;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}