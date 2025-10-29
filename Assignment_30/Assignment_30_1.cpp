/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_30_1.cpp
//  Descirption :   Program to checks whether 15th bit is On or OFF.  
//  Author :        Lokesh Sanjay Sapkal
//  Date :          16-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    int iMask = 0x00004000;
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
        cout<<"15th bit is ON";
    }
    else
    {
        cout<<"15th bit is OFF";
    }
    
    return 0;
}