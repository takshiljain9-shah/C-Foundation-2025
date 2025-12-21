#include <stdio.h>

int sumofNnaturalnumber(int n);

int main(){
    int n, sum;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Please enter a positive integer.\n");
    }else{
        sum = sumofNnaturalnumber(n);
        printf("The sum of %d natural number is : %d\n", n, sum);
    }
    return 0;
}
int sumofNnaturalnumber(int n){
    if (n == 0){
        return 0;
    }
    else {
        return n + sumofNnaturalnumber(n-1);
    }
}