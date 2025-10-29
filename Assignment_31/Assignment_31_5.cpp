/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_31_5.cpp
//  Descirption :   Program to on first 4 bit of accepted number. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          17-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Input :     73
Output :    79
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iAns = 0;
    
    iAns = iNo | (iMask);

    return iAns;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated Number is : "<<iRet;

    return 0;
}