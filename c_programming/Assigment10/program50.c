//Write a program which accept area in square feet and convert it into square meter. ($1$ square feet $= 0.0929$ square meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
    double meter = 0;

    meter = iValue*0.092903;
    return meter;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);
    
    printf("Area in square meter is %f", dRet);
    
    return 0;
}