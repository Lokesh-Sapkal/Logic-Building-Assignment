/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_3_4X.c
//  Descirption :   Program to change the case of character 
//  Author :        Lokesh Sanjay Sapkal
//  Date :          11-05-2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : a       Output : A
// Input : D       Output : d

#include<stdio.h>

char DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
    }

    return cValue;
}

int main()
{
    char ch= '\0';
    char CRet = '\0';

    printf("Enter character : ");
    scanf("%c",&ch);

    CRet = DisplayConvert(ch);

    printf("After Changing case character is : %c\n",CRet);

    return 0;
}