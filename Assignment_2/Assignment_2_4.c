//////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_2_4.c
//  Descirption :   Program to accept two no. and display 1st no. in 2nd no. of times.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 12  5
// Output : 12  12  12  12  12

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int i = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(i = 1;i <= iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}