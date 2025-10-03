#include<stdio.h>
#include<fcntl.h>
#include<io.h>

# define BUFFER_SIZE 1024

int CountChar(char FName[],char Ch)
{
    int fd = 0,iRet = 0, i = 0, iCountChar = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);

    while((iRet = read(fd,Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0;i < sizeof(Buffer);i++)
        {
            if(Buffer[i] == Ch)
            {
                iCountChar++;
            }
        }
    }
    
    close(fd);

    return iCountChar;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter file name : ");
    scanf("%s",FileName);
    
    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency is %d",iRet);

    return 0;
}