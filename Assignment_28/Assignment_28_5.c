#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[10] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[26] = "India is my country Radha";
    
    printf("Enter the name of file that you want to read : ");
    scanf("%s",FileName);

    fd = open(FileName,O_APPEND | O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to create file");
        close(fd);
        return -1;
    }
    else
    {
        printf("File opened successfully.\n");
        
        iRet = write(fd,Buffer,sizeof(Buffer)-1);
    }

    close(fd);

    return 0;
}