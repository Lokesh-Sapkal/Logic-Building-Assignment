/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_8_1.c
//  Descirption :   Program to calculate area of circle. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5.3
// Output : 88.2026

// Input : 10.4
// Output :  339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dAns = 0.0;

    dAns = 1;
    dAns = 3.14 * fRadius * fRadius;

    return dAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}