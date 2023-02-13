#include <stdio.h>
#include <windows.h>
int main() {

    int num, exit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("number is even\n");

    }
    else{
        printf("number is odd\n");
    }
    printf("hit any key to continue");
    scanf("%d", &exit);
    return 0;
}
