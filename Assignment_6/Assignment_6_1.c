/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_6_1.c
//  Descirption :   Program to check no. and display "Small","Medium" and "Large" based on codition 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 75
// Output : Medium

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if ((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}