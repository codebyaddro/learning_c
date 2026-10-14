#include <stdio.h>

int main() {
    
    int a = 5;
    int b = 7;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    
    printf("Sum of %d and %d = %d\n", a, b, sum);
    printf("Sub of %d and %d = %d\n", a, b, sub);
    printf("Mul of %d and %d = %d\n", a, b, mul);
    printf("Div of %d and %d = %d\n", a, b, div);

    return 0;
}