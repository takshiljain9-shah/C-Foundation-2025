#include <stdio.h>

int main(){
    int n, i, factorial = 1;

    printf("Enter any Number: \n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("factorial of an number is %d\n", factorial);
    return 0;
}