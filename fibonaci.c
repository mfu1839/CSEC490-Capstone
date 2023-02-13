#include<stdio.h>
#include <windows.h>
void printFibonacci(int number)
{
    static int first_number = 0, second_number = 1, third_number;
    if(number > 0)
    {
        third_number = first_number + second_number;
        first_number = second_number;
        second_number = third_number;
        printf("%d ",third_number);
        printFibonacci(number - 1);
    }
}
int main()

{
    int exit;
    int number;
    printf("Enter the number for fibonacci series:");
    scanf("%d",&number);
    printf("Fibonacci Series for a given number: \n");
    printf("%d %d ", 0, 1);
    printFibonacci(number - 2);
    printf("Hit any key then enter to continue");
    scanf("%d", &exit);
    return 0;

}
