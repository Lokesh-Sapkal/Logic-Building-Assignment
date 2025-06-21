/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_8_3.c
//  Descirption :   Program to accept distance in kilometre and convert it into meter. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 5000

// Input : 12
// Output : 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);
    
    iRet = KMtoMeter(iValue);

    printf("distance in meter is %d",iRet);

    return 0;
}