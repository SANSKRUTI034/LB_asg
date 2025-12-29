//Write a program which returns difference between Even factorial and odd factorial of given number.


#include<stdio.h>

// Helper function for Even Factorial
int GetEvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    if(iNo < 0) { iNo = -iNo; }
    
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

// Helper function for Odd Factorial
int GetOddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    if(iNo < 0) { iNo = -iNo; }
    
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int FactorialDiff(int iNo)
{
    // Logic
    int iEvenFact = 0;
    int iOddFact = 0;

    iEvenFact = GetEvenFactorial(iNo);
    iOddFact = GetOddFactorial(iNo);

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    
    printf("Factorial difference is %d",iRet);
    
    return 0;
}