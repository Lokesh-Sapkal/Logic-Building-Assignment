///////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_1_1.c
//  Descirption :   Program to divide two numbers
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_INVALID_INPUT -1

///////////////////////////////////////////////////////////////////
//
//  Prototype :     float Divide(int , int)
//  Description :   Function to divide tw0 integers
//  Input :         int , int
//  Output :        float
//
///////////////////////////////////////////////////////////////////

float Divide(int iNo1,int iNo2)
{
    float fAns = 0.0f;

    if(iNo2 == 0)
    {
        return ERR_INVALID_INPUT;
    }

    fAns = iNo1 / iNo2;
    return fAns;
}

int main()
{
    int iValue1 = -1,iValue2 = 5;
    float fRet = 0.0f;

    fRet = Divide(iValue1,iValue2);

    printf("Division is %.2f",fRet);

    return 0;
}