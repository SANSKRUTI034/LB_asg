// 5. Check if number is divisible by 5
#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int no1)
{
    
    if((no1 % 5)==0)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number is not divisible by 5");
    }
}

int main()
{
    int number;
    int iRet=0;
    printf("Enter number: ");
    scanf("%d", &number);

    iRet = is_divisible_by_five(number);
    
    return 0;
}