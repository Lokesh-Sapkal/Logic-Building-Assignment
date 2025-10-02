#include<stdio.h>
#include<fcntl.h>
#include<string.h>

# define BUFFER_SIZE 1024

int main()
{
    char FileName[10] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    
    printf("Enter the name of file that you want to read : ");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to create file");
        close(fd);
        return -1;
    }
    else
    {
        printf("File opened successfully.\n");
        printf("Data from the file is :\n");

        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            write(1,Buffer,sizeof(Buffer));
            memset(Buffer,0,sizeof(Buffer));
        }
    }

    close(fd);

    return 0;
}