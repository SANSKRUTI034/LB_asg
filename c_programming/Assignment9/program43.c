//Write a program to find even factorial of given number. (Even factorial is the product of all even numbers less than or equal to the number, e.g., Even Factorial of $10$ is $10 \times 8 \times 6 \times 4 \times 2 = 3840$)


#include<stdio.h>

int EvenFactorial(int iNo)
{
    int fact =1;
    int iCnt =1;
    for(iCnt =1 ; iCnt<=iNo ; iCnt++)
    {
        fact = fact*iCnt;
        

        
    }
    return fact;

    if((fact%2)==0)
        {
            printf("%d \n",fact);
        }

    


    
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d",iRet);
    
    return 0;
}