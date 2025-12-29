// 2) Print all even numbers up to N
#include<stdio.h>

void print_even_numbers(int iNo)
{
    int iCnt =0;
    for(iCnt =1 ; iCnt<=iNo ; iCnt++)
    {
        if((iCnt%2 )==0)
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


    print_even_numbers(limit);
    return 0;
}