////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_32_1.cpp
//  Descirption :   Program to accept one number and position from user and check whether bit at that position is on or off.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          17-06-2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input :     10  2
Output :    TRUE
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1,iAns = 0;
    
    iMask = iMask << (iPos-1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iVlaue = 0,iBit = 0;
    bool bRet = 0;

    cout<<"Enter the number : ";
    cin>>iVlaue;

    cout<<"Enter position : ";
    cin>>iBit;

    bRet = ChkBit(iVlaue,iBit);

    if(bRet == true)
    {
        cout<<"Bit at position "<<iBit<<" is ON\n";
    }
    else
    {
        cout<<"Bit at position "<<iBit<<" is OFF\n";
    }

    return 0;
}