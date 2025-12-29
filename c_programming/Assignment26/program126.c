//input : 5
//output : A B C D E

#include<stdio.h>
int i =0;
char ch = 'A';
void Pattern(int iNo)
{
    for(i= 1 ; i<=iNo ; i++ )
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
