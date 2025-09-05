/*  Input : iRow = 5   iCol = 5
    Output : 1   2   3   4   5
            -1  -2  -3  -4  -5
             1   2   3   4   5
            -1  -2  -3  -4  -5
             1   2   3   4   5  */

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,iNo1 = 0,iNo2 = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1,iNo1 = 1,iNo2 = -1;j <= iCol;j++,iNo1++,iNo2--)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iNo1);
            }
            else
            {
                printf("%d\t",iNo2);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}