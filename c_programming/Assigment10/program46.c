//Write a program which accept radius of circle from user and calculate its area. Consider value of pi as 3.14. 

#include<stdio.h>

double CircleArea(float fRadius)
{
    
    const float PI = 3.14;
    double dArea = 0.0;
    
    if(fRadius < 0) 
    {
        fRadius = -fRadius;
    }

    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    
    printf("Area is %f", dRet); 
    
    return 0;
}