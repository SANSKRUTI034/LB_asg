//Write a program which accept number from user and count frequency of $2$ in it.


#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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
    
    iRet = CountTwo(iValue);
    
    printf("%d",iRet);
    
    return 0;
}