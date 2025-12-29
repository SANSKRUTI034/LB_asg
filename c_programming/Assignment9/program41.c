//Write a program which accept number from user and display below pattern. (The pattern is a sequence of *, #, and $ symbols.)

#include<stdio.h>

void Display(int iNo)
{
    
    int iCnt = 0;
    
    if(iNo < 0) 
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 3) == 1) 
        {
            printf("* ");
        }
        else if((iCnt % 3) == 2) 
        {
            printf("# ");
        }
        else 
        {
            printf("$ ");
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}