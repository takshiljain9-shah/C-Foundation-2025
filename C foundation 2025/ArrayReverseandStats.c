// "Write a C program called 'Array Engine' that accepts 10 integers
// from the user while calculating their sum and finding the maximum value.
// Reverse the array elements in place, then output the reversed array, the average, and the maximum."

#include <stdio.h>

int main(){
    int arr[10];
    int i , temp, max;
    float sum = 0;

    printf("Array Engine\n");

    for (i = 0; i < 10; i++){
        
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        sum += arr[i];
    }
    max = arr[0];
    for (i = 1; i < 10; i++){
        if (arr[i] > max) max = arr[i];
    }
    for (i = 0; i < 5; i++){
        temp = arr[i];

        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    printf("\nReversed Array: ");
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\nAverage: %2.f", sum / 10);
    printf("\nMaximum: %d\n", max);

    return 0;
}
