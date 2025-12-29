//Write a program which accept number from user and return the count of digits in between 3 and 7. (i.e., digits 4, 5, 6)



#include<stdio.h>

int CountRange(int iNo)
{
    // Logic
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // Check if digit is greater than 3 AND less than 7
        if((iDigit > 3) && (iDigit < 7))
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
    
    iRet = CountRange(iValue);
    
    printf("%d",iRet);
    
    return 0;
}