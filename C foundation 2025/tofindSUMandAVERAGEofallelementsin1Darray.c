#include <stdio.h>

int main(){
    int n, i;

    float sum = 0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);

    for (i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (sum)/n;

    printf(" sum of all elemets = %2f\n", sum);
    printf(" average of all elements = %2f\n", average);

    return 0;
}