#include <stdio.h>

int main(){
    int num, i;
    long int factorial = 1;

    printf("Enter an number: \n");
    scanf("%d", &num);

    if (num < 0){
        printf("Factorial of a negative number dosen't exist.\n");
    }
    else{
        for(i = 1; i <= num; i++){
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}