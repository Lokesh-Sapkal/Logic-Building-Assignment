/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_6_4.c
//  Descirption :   Program to accept no. and display table of that no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 2
// Output : 2   4   6   8   10  12  14  16  18  20

// Input : 5
// Output : 5   10  15  20  25  30  35  40  45  50

// Input : -5
// Output : 5   10  15  20  25  30  35  40  45  50

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0,iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo;
    for(iCnt = 1;iCnt <= 10;iCnt++)
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