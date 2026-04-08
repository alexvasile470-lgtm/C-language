#include<stdio.h>

int MaxNumber(int max_number, int numbers[])
{
    int Index;
    int max = numbers[0];

    for (Index = 0; Index < max_number; Index++)
    {
        if(numbers[Index] > max )
        {
            max = numbers[Index];
        }
    }
    
    return max;
    
}
int main()
{
    int max_number = 32967;
   
    int numbers[max_number];
    int Index;  
    printf("INTRODUCETI CATE NUMERE DORITI SA VERIFICATI:\n");
    scanf("%d", &max_number);
    for (Index = 0; Index < max_number; Index++)
    {
        printf("INTRODUCETI NUMARUL %d:\n", Index + 1);
        scanf("%d", &numbers[Index]);
    }
    
printf("NUMARUL MAXIM ESTE: %d\n", MaxNumber(max_number, numbers))

    return 0;
}