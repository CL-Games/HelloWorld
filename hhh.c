#include <stdio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands:\n");
    printf("A: ");
    scanf("%lf", &first);
    printf("B: ");
    scanf("%lf", &second);
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
       if(second== 0){
          printf("ERROR: Division by 0");
       }
       else{
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
       }
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
     printf("\n");
    return 0;
}