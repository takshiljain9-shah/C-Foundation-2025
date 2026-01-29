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
    if (n > 2) printf("%d ", n);
    printf("\n");
}

//FILE I/O: saving a state to a permanent file
void save_tasks(TaskBuffer *tb){
    FILE *file = fopen("engineering_log.txt", "w");
    if (file == NULL) return;

    for (int i = 0; i < tb-> count; i++){
        fprintf(file, "%d,%s,%d\n", tb->tasks[i].id, tb->tasks[i].title, tb->tasks[i].complexity_score);
    }
    fclose(file);
    printf("[system] Data successsfully committed to enginnering_log.txt\n");
}

int main(){
    TaskBuffer tb;
    init_buffer(&tb);
    char input_title[50];
    int input_score;

    printf("---TECH COMMAND CENTRE ---\n");

    while(1){
        printf("\nEnter task title (or 'exit' to finish): ");
        scanf("%s", input_title);

        if
    }
}