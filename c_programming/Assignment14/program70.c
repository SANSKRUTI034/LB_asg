//Write a program which accept number from user and count frequency of such digits which are less than $6$. (i.e., digits $0, 1, 2, 3, 4, 5$)


#include<stdio.h>

int CountSmall(int iNo)
{
    // Logic
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 0) // Zero is less than 6
    {
        return 1;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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
    
    iRet = CountSmall(iValue);
    
    printf("%d",iRet);
    
    return 0;
}