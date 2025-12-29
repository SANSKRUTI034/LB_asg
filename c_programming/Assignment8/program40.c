//Write a program which accept number from user and display its table in reverse order.


#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt =0;
    int iTable =1;

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        iTable = iCnt*iNo;
        printf("%d \n",iTable);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    TableRev(iValue);
    
    return 0;
}