#include<stdio.h>
#include<fcntl.h>
#include<io.h>

# define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
    int fd = 0, iAns = 0, i = 0, iCap = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);

    while((iAns = read(fd,Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0;i < sizeof(Buffer);i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                iCap++;
            }
        }
    }
    
    close(fd);

    return iCap;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital character are %d",iRet);

    return 0;
}