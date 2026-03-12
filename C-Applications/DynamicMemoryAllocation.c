#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int *arr;

    printf("Enter number of elements for your dynamic array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL){
        printf("Memory not allocated. System crash prevented. \n");
        return 1;
    }

    printf("Enter %d elements are: \n");
    for (i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }

    printf("The elements are: ");
    for (i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }

    free(arr);
    printf("\nMemory successfully freed for the next task. \n");

    return 0;

}