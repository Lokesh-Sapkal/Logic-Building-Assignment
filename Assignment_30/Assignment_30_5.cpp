///////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_30_5.cpp
//  Descirption :   Program to checks whether first and last bit is On or OFF(1st and 32th).  
//  Author :        Lokesh Sanjay Sapkal
//  Date :          16-06-2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    int iMask = 0x80000001;
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
        cout<<"first and last bit is ON";
    }
    else
    {
        cout<<"first and last bit is OFF";
    }
    
    return 0;
}