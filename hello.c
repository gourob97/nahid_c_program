#include<stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    int sub = num1 - num2;
    int product = num1 * num2;
    float quotient = num1 / (float) num2;

    printf("The result is %d\n", sum);
    printf("The result is %d\n", sub);
    printf("The result is %d\n", product);
    printf("The result is %f\n", quotient);
}
