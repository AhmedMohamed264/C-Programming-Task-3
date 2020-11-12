#include <stdio.h>

void store_unique_numbers();
int is_dublicated(int numbers[], int iteration);
int sum(int arr[], int array_size);
int print_all(int arr[], int array_size, int sum);
int c = 0, unique[20];
void main()
{
    int summation;
    printf("Enter 20 numbers: ");
    store_unique_numbers();
    summation = sum(unique, c);
    print_all(unique, c, summation);
}
void store_unique_numbers()
{
    int numbers[20], isDublicated = 0;
    for(int i=0; i < 20; i++)
    {
        scanf(" %d", &numbers[i]);
        isDublicated = is_dublicated(numbers, i);
        if(isDublicated == 0)
        {
            unique[c] =  numbers[i];
            c += 1;
        }
    }
}
int is_dublicated(int numbers[], int iteration)
{
    int i = iteration;
    for(int k = 0; k < i; k++)
    {
        if(numbers[i] == numbers[k])
        {
            return 1;
        }
    }
    return 0;
}
int sum(int arr[], int array_size)
{
    int sum = 0;
    for(int i = 0; i < array_size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int print_all(int arr[], int array_size, int sum)
{
    printf("The unique numbers are:\n");
    for(int i = 0; i < array_size; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("The summation of all unique numbers are: %d", sum);
    
}