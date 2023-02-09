#include<stdio.h>
int main() {
    int number1, number2, sum;
    printf("Enter a number ");
    scanf("%d", &number1);
    printf("Enter another number ");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("The result is %d", sum);

    return 0;
}
