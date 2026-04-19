#include <stdio.h>

int main(){
    int scores[] = {85, 92, 78, 95, 88};
    int *ptr = scores;

    int length = sizeof(scores) / sizeof(scores[0]);

    printf("Array Pointer Navigation\n");

    for(int i = 0; i < length; i++){
        printf("Score at Index %d (address: %p): %d\n", i, (void*)(ptr + i), *(ptr + i));
    }
    return 0;
}