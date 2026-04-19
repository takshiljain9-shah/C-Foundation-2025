#include <stdio.h>

int main(){
    int num1, num2, num3, num4, num5, average;

    printf("Enter any five numbers: \n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    average = (num1 + num2 + num3 + num4 + num5)/5;

    printf("the average of %d, %d, %d, %d and %d is %d\n", num1, num2, num3, num4, num5, average);
    return 0;
}