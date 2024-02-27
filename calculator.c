#include <stdio.h>

int main() {
    double a, b, result; 
    char operator;

    printf("Enter First Number: \n"); 
    scanf("%lf", &a);

    printf("Choose (+ or -): \n"); 
    scanf(" %c", &operator); // Notice the space before %c

    printf("Enter Second Number: \n"); 
    scanf("%lf", &b);

    if(operator == '+') {
        result = a + b; 
        printf("The answer is: %lf\n", result);
    } else if(operator == '-') {
        result = a - b;  
        printf("The answer is: %lf\n", result);
    }

    return 0; 
}
