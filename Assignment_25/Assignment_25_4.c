/////////////////////////////////////////////////////////////////////////////////////
//
//  Name :          Assignment_25_4.c
//  Descirption :   Program to accept string and display only digits from that string.
//  Author :        Lokesh Sanjay Sapkal
//  Date :          04-06-2025
//
/////////////////////////////////////////////////////////////////////////////////////

/*
    Input :  "marve89llous121" 
    Output :  89121 
    Input :   "Demo"
    Output :   
*/

#include<stdio.h>

void DisplayDigit(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= '0') && (*ch <= '9'))
        {
            printf("%c",*ch);
        }
        ch++;
    }     
}

int main()
{
    char arr[40];

    printf("Enter string: "); 
    scanf("%[^'\n']s",arr); 

    DisplayDigit(arr);

    return 0;
}