/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_2.c
//  Descirption :   Program to accept one no. and print factors of that no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 24
// Output : 1   2   3   4   6   8  12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    // Updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= (iNo / 2);i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}