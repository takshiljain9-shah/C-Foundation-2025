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