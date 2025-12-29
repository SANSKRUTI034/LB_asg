//Write a program which accept two numbers and print its multiplication.

#include<stdio.h>

int Multiply(int ino1 , int ino2)
{
    int multiplication = 0;
    multiplication = ino1 * ino2 ;
    return multiplication;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter second numbers: ");
    scanf("%d",&iValue2);

    iRet = Multiply(iValue1, iValue2);

    printf("Multiplication is: %d", iRet);

    return 0;
}
