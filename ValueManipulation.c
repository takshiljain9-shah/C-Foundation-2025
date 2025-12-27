#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 100, y = 500;

    printf("Memory Management\n");
    printf("Before Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);
    printf("Status: Memory Successfully Manipulated.\n");

    return 0;
}