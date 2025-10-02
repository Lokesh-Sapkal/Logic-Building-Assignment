#include<stdio.h>
#include<fcntl.h>

int main()
{
    char FileName[10] = {'\0'};
    int fd = 0;
    
    printf("Enter the name of file that you want to create : ");
    scanf("%s",FileName);

    fd = creat(FileName,0777);
    if(fd == -1)
    {
        printf("Unable to create file");
        close(fd);
        return -1;
    }

    printf("File created successfully");

    close(fd);

    return 0;
}