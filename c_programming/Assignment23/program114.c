#include<stdio.h>

/*
// 4. Accept N numbers from user and accept Range, Display all elements from that Range.
*/
void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    // Logic
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the starting point");
    scanf("%d", &iValue1);
    
    printf("Enter the ending point");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}