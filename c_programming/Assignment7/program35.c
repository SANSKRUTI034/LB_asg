//Print first 5 multiples of N
//Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    int Multiply =0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        
        Multiply = iNo*iCnt;
        printf("%d \n", Multiply);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    MultipleDisplay(iValue);
    
    return 0;
}