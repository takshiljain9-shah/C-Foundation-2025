#include <stdio.h>

int main(){
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op){
        case '+':
        printf("sum = %d\n", a + b);
        break;

        case '-':
        printf("difference = %d\n", a - b);
        break;

        case '*':
        printf("product= %d\n", a * b);
        break;

        case '/':
        printf("Quotient = %d\n", a / b);
        break;

        default : 
        printf("Invalid Operator\n");
    }
    return 0;
}