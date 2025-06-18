/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_4_2.c
//  Descirption :   Program to display the factorial of no. in reverse order(desc).
//  Author :        Lokesh Sanjay Sapkal
//  Date :          22-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 12
// Output : 6  4  3  2  1

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2);iCnt >= 1;iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}