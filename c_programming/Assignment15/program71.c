//Write a program which accept number from user and return the count of even digits.

#include<stdio.h>

int CountEven(int iNo)
{
    // Logic
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0) // Zero is considered an even digit
    {
        return 1; 
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // Check if digit is even (0, 2, 4, 6, 8)
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("%d",iRet);
    
    return 0;
}