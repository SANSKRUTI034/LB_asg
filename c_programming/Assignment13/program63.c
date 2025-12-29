// 3) Print all odd numbers up to N
#include<stdio.h>

void print_odd_numbers(int iNo)
{
    int iCnt =0;
    for(iCnt =1 ; iCnt<=iNo ; iCnt++)
    {
        if((iCnt%2 )!=0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    print_odd_numbers(limit);
    return 0;
}