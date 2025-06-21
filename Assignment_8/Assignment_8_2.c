/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_8_2.c
//  Descirption :   Program to calculate area of rectangle. 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 5.3  9.78
// Output : 51.834

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dAns = 0.0;

    dAns = 1;
    dAns = fWidth * fHeight;

    return dAns;
}

int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);
    
    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is %f",dRet);

    return 0;
}