#include<stdio.h>
#include<fcntl.h>
#include<io.h>

# define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    int fd = 0, iAns = 0, i = 0, iSmall = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);

    while((iAns = read(fd,Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0;i < sizeof(Buffer);i++)
        {
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iSmall++;
            }
        }
    }
    
    close(fd);

    return iSmall;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Capital character are %d",iRet);

    return 0;
}