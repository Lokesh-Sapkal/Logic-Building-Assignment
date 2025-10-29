/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_30_3.cpp
//  Descirption :   Program to checks whether 7th, 15th, 21st, 28th bit is On or OFF.  
//  Author :        Lokesh Sanjay Sapkal
//  Date :          16-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    int iMask = 0x08104040;
    int iAns = 0;

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
    UINT iValue1 = 0;
    bool bRet = false;
    
    cout<<"Enter number : ";
    cin>>iValue1;

    bRet = ChkBit(iValue1);

    if(bRet == true)
    {
        cout<<"7th, 15th, 21th and 28th bit is ON";
    }
    else
    {
        cout<<"7th, 15th, 21th and 28th bit is OFF";
    }
    
    return 0;
}