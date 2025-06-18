/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_1.c
//  Descirption :   Program to accept one no. and print that no. of even no on screen.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 7
// Output : 2  4   6   8   10  12  14

#include<stdio.h>

void PrintEven(int iNo)
{
    // Filter
    if(iNo <= 0)
    {
        return;
    }

    int i = 0;
    for(i = 1;i <= (iNo*2);i++)
    {
        if((i % 2) == 0)
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

    PrintEven(iValue);

    return 0;
}