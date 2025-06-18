/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_3.c
//  Descirption :   Program to accept one no. and print even factors of that no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 36
// Output : 2   4   6   12   18

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    // Updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= (iNo / 2);i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
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

    DisplayEvenFactor(iValue);

    return 0;
}