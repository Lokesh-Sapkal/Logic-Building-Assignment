/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_9_1.c
//  Descirption :   Program to display digits in reverse order.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          29-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/* 
    Input : 2395
    Output :5
            9
            3
            2   

    Input : -2395
    Output :5
            9
            3
            2   
    Input : 9000
    Output :0
            0
            0
            9   
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int  main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}