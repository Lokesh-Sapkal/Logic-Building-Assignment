/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_4_1.c
//  Descirption :   Program to print Multiplication of factorial of no.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          22-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 12
// Output : 144 (1 * 2 * 3 * 4 * 6)

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0,iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= (iNo / 2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}