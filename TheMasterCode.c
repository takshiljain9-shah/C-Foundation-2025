#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structures: defining a complex data type
typedef struct{
    int id;
    char title[50];
    int complexity_score;
}TechTask;

// Pointers & DMA: Managing memory on the heap
typedef struct{
    Tech task *tasks;
    int count;
    int capacity;
}TaskBuffer;

//Initialize the dynamic buffer
void init_buffer(TaskBuffer *tb){
    tb->count = 0;
    tb->capacity = 2;
    tb->tasks = (TechTask *)malloc*(tb->capacity * sizeof(TechTask));
}

//Initialize the dynamic buffer
void factorize(int n){
    printf("Factors of %d: ", n);
    while(n % 2 == 0){
        printf("%d ", 2);
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2){
        while (n % i == 0){
            printf("%d ", i);
            n /= i;
        }
    }
}