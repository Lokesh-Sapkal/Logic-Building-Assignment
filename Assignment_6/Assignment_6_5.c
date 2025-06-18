/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_6_5.c
//  Descirption :   Program to accept no. and display table of that no. in reverse order.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2
// Output : 20  18  16  14  12  10  8   6   4   2

// Input : 5
// Output : 50  45  40  35  30  25  20  15  10  5

// Input : -5
// Output : 50  45  40  35  30  25  20  15  10  5

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo;
    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iAns = iAns * iCnt;
        printf("%d\t",iAns);
        iAns = iNo;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}