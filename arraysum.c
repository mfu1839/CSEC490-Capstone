#include <stdio.h>

int main() {
    int array[5],i,sum, exit;

    printf("Enter 5 numbers into the array: ");

    for(i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
    sum = 0;
    for(i=0; i<5; i++){
        sum+=array[i];
    }
    printf("sum of the array is: %d\n", sum);
    printf("Hit any key then enter to continue");
    scanf("%d", &exit);
    return 0;
}
