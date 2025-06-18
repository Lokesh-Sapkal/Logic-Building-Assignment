////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_4_3.c
//  Descirption :   Program to display Non Factorial of no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          22-05-2025
//
////////////////////////////////////////////////////////////////////

// Input : 12
// Output : 5   7   8   9   10  11

#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}