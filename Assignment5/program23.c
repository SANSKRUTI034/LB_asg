//Check Leap Year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 ==0)
    {
        printf("This is Leap Year");
    }

    else{
        printf("This is Ordinary Year");
    }
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    CheckLeapYear(year);

    return 0;
}
