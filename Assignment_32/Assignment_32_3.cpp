/////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_32_3.cpp
//  Descirption :   Program to accept one number and position from user and on that bit.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          17-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/*
Input :     10  3
Output :    14
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1,iAns = 0;
    
    iMask = iMask << (iPos-1);

    iAns = iNo | iMask;

    return iAns;
}

int main()
{
    UINT iVlaue = 0,iBit = 0,iRet = 0;

    cout<<"Enter the number : ";
    cin>>iVlaue;

    cout<<"Enter position : ";
    cin>>iBit;

    iRet = OnBit(iVlaue,iBit);

    cout<<"Updated number is : "<<iRet;

    return 0;
}