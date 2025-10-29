/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_31_2.cpp
//  Descirption :   Program to off 7th and 10th bit of accepted number. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          16-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Input :     577
Output :    1
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240;
    UINT iAns = 0;
    
    iAns = iNo & (~(iMask));

    return iAns;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated Number is : "<<iRet;

    return 0;
}