#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(){
    float num1, num2, result;
    char op;

    printf("--- Modular calculator ---");
    
    printf("Enter calculation: (e.g., 10 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op){
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': 
            if(num2 != 0){
                result = divide(num1, num2);
            }else{
                printf("Error: Division by zero is impossible!\n");
                return 1;
            }
            break;
        default:
            printf("Invalid Operator! Use +, -, * or / \n");
            return 1;
    }
    printf("Result : %2f\n", result);
    return 0;
}

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {return a / b; }

