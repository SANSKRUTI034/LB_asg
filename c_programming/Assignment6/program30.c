#include<stdio.h>

float Percentage(int iNo1 , int iActual)
{
    float Marks = 0.0f;

    Marks = ((float)iActual / iNo1) * 100;   // float division
    return Marks;
}

int main()
{
    int iTotal = 0, iObtained = 0;
    float fRet = 0.0f;

    printf("Enter total marks: ");
    scanf("%d",&iTotal);

    printf("Enter obtained marks: ");
    scanf("%d",&iObtained);

    fRet = Percentage(iTotal , iObtained);

    printf("Percentage is: %f", fRet);

    return 0;
}
