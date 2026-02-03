#include <stdio.h>

int main(){
    int num, original, reversed = 0, remainder;

    printf("Enter an Number: \n");
    scanf("%d", &num);

    original = num;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (original == reversed){
        printf("%d is an palindrome number.\n", original);
    }else{
        printf("%d is not an palindrome number.\n", original);
    }
    return 0;
}