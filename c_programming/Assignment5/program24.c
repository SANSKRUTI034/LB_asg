//Check Positive, Negative, or Zero

#include<stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("The number is positive");
    }
    
    else if(num < 0)
    {
        printf("The number is negative");
    }

    else if(num == 0)
    {
        printf("The number is zero");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}
