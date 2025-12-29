//Write a program which accept number from user and check whether that number is even or odd.

#include<stdio.h>

void ChkEvenOdd(int iNo)
{

    if(iNo % 2 ==0)
    {
        printf("The number is even");
    }

    else
    {
        printf("The number is odd");

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    ChkEvenOdd(iValue);

    return 0;
}
