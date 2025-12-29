//Write a program to find odd factorial of given number. (Odd factorial is the product of all odd numbers less than or equal to the number, e.g., Odd Factorial of $10$ is $9 \times 7 \times 5 \times 3 \times 1 = 945$)


#include<stdio.h>

int OddFactorial(int iNo)
{
    // Logic
    
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    
    printf("Odd Factorial of number is %d",iRet);
    
    return 0;
}