#include <stdio.h>

int main(){
    int num, original, remainder, result = 0;

    printf("Enter an number: \n");
    scanf("%d", &num);

    original = num;

    while (num != 0){
        remainder = num % 10;
        result = result + (remainder*remainder*remainder);
        num = num / 10;
    }
    if (result == original){
        printf("%d is an armstrong number\n", original);
    }else{
        printf("%d is not an armstrong number\n", original);
    }
    return 0;
}