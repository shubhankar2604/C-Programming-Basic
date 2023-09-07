// Calculator using switch and looping
#include <stdio.h>
#include <stdlib.h>

// Main code
int main() {
  char ch;
  double a, b;
  while (1) {
    printf("Enter an operator (+, -, *, /): \n");
    scanf(" %c", &ch);

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    switch (ch) {
    // For Addition
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
      break;
    // For Subtraction
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
      break;
    // For Multiplication
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
      break;
    // For Division
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
      break;
    // If the function doesn't match any case
    default:
      printf("Error! please write a valid operator\n");
    }

    printf("\n");
  }
}
