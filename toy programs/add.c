#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1, num2, sum;
//num1 = (int*) malloc(10);
    printf("Enter two numbers: ");
    scanf("%d%d,", &num1, &num2);
    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}