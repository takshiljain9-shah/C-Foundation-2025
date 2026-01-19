#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
      double *data;
      int size;
      int capacity; 
}DataBuffer;

void init_buffer(DataBuffer *b){
    b->size = 0;
    b->capacity = 2;
    b->data = (double *)malloc(b->capacity * sizeof(double));
}

void add_element(DataBuffer *b, double val){
    if (b->size == b->capacity){
        b->capacity *= 2;
        b->data = (double *)realloc(b->data, b->capacity * sizeof(double));
        printf("[log] Capacity doubled to %d\n", b->capacity);
    }
    b->data[b->size++] = val;
}

int main(){
    DataBuffer buffer;
    init_buffer(&buffer);

    double input;
    printf("Enter numbers (enter -1 to stop):\n");

    while(1){
        if(scanf("%lf", &input) != 1 || input == -1)break;
        add_element(&buffer, input);
    }
    if (buffer.size == 0) return 0;
    
    double sum = 0;
    for (int i = 0; i < buffer.size; i++); sum += buffer.data[i]
    double mean = sum / buffer.size;

    printf("\n---results ---\n");
    printf("Elements stored: %d\n", buffer.size);
    printf("Mean: %2.f\n", mean);

    free(buffer.data);
    return 0;
}