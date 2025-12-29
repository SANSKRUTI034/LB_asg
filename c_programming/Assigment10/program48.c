//Write a program which accept distance in kilometre and convert it into meter. 

#include<stdio.h>

int KMToMeter(int iNo)
{
    int Meter =0;

    Meter = iNo * 1000;
    return Meter;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter distance in kilometre");
    scanf("%d",&iValue);
    
    iRet = KMToMeter(iValue);
    
    printf("Distance in meter is %d", iRet);
    
    return 0;
}