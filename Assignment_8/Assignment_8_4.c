/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_8_4.c
//  Descirption :   Program to accept temperature in Fahrenheit and convert it into celsius.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          28-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 10
// Output : -12.2222    (10 - 32) * (5/9)

// Input : 34
// Output : 1.11111    (34 - 32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iAns = 0.0 ;
    // double iNo1 = 0.0,iNo2 = 0.0;

    iAns = (((double)fTemp - 32.0) * (5.0/9.0));

    // iNo1 = (double)(fTemp - 32.0);
    // iNo2 = (5.0/9.0);
    // printf("%lf\n",iNo1);
    // printf("%lf\n",iNo2);

    return iAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf",dRet);

    return 0;
}