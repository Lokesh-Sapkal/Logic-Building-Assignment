#include<stdio.h>
#include<fcntl.h>

int main()
{
    char FileName[10] = {'\0'};
    int fd = 0;
    
    printf("Enter the name of file that you want to read : ");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
        close(fd);
        return -1;
    }

    printf("File opened successfully");

    close(fd);

    return 0;
}