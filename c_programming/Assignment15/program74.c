//Write a program which accept number from user and return multiplication of all digits.


#include<stdio.h>

int MultDigits(int iNo)
{
    // Logic
    int iMult = 1;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0; // Multiplication of digits in '0' is usually considered 0
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        // If the digit is 0, the entire multiplication becomes 0, so we can return early
        if(iDigit == 0)
        {
            return 0;
        }
        
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);
    
    printf("%d",iRet);
    
    return 0;
}