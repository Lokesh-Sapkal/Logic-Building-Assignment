#include<stdio.h>
#include<fcntl.h>
#include<io.h>

# define BUFFER_SIZE 1024

void DisplayN(char FName[],int iSize)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file");
        close(fd);
        return;
    }

    read(fd,Buffer,iSize);

    printf("%s",Buffer);
    
    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);
    
    printf("Enter the number characters : ");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}