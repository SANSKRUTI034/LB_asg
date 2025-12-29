//Write a program which accept two numbers and check whether numbers are equal or not.

#include<stdio.h>

void ChkEqual(int ino1 , int ino2)
{
    if(ino1 == ino2)
    {
        printf("The numbers are equal");
    }

    else
    {
        printf("The numbers are not equal");

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d",&iValue1,&iValue2);

    ChkEqual(iValue1,iValue2);

    return 0;
}
