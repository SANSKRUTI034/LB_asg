//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits. (Difference = Sum of Even Digits - Sum of Odd Digits)


#include<stdio.h>

int CountDiff(int iNo)
{
    // Logic
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0) // Even digit (including 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else // Odd digit
        {
            iOddSum = iOddSum + iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);
    
    printf("%d",iRet);
    
    return 0;
}