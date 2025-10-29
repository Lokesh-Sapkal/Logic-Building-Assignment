////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_32_5.cpp
//  Descirption :   Program to accept one number and toggle contents of first and last nibble of the number.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          17-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input :     1342177290
Output :    2684354565

Input :     2684354565
Output :    1342177290

Input :     3
Output :    4026531852
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iVlaue = 0,iRet = 0;

    cout<<"Enter the number : ";
    cin>>iVlaue;

    iRet = ToggleBit(iVlaue);

    cout<<"Updated number is : "<<iRet;

    return 0;
}