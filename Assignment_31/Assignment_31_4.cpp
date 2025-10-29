/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_31_4.cpp
//  Descirption :   Program to toggle 7th and 10th bit of accepted number. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          16-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Input :     137
Output :    713
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000240;
    UINT iAns = 0;
    
    iAns = iNo ^ (iMask);

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