/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_5_5.c
//  Descirption :   Program to accept no. and display five Multiple no. of no. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          23-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 4
// Output : 4   8   12  16  20

#include<stdio.h>

void MultipleDisplay(int iNO)
{
    int iCnt = 0,iMult = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
    
    iCnt = 1;
    iMult = 1;
    while(iMult < (iNO * 5))
    {
        iMult = iCnt * iNO;
        printf("%d\t",iMult);
        iCnt++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}