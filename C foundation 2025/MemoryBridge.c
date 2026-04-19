#include <stdio.h>

int main(){
    int arr[5] = {1, 1, 2 , 2, 5};

    int *ptr = arr;

    int sum = 0;

    printf("Task counts of previous 5 days are: \n");

    int i = 0;
    
    while(i < 5){
        printf("Day %d: %d (address %p)\n", i + 1, *ptr, (void*)ptr);

        sum += *ptr;
        ptr++;
        i++;
    }
    printf("Total tasks: %d\n", sum);

    return 0;
}