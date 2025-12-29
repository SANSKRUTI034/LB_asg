//Write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultiFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)   // if i is a factor of iNo
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}
