//Write a program which accept temperature in Fahrenheit and convert it into celsius. 

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double celcius = 0.0;

    celcius = (5/9.0)*(fTemp - 32);
    return celcius;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);
    
    printf("Temperature in Celsius is %f", dRet);
    
    return 0;
}