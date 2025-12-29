//Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    // Logic
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
