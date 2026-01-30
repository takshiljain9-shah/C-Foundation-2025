#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. STRUCTURES: Defining a complex data type
typedef struct {
    int id;
    char title[50];
    int complexity_score;
} TechTask;

// 2. POINTERS & DMA: Managing memory on the Heap
typedef struct {
    TechTask *tasks;
    int count;
    int capacity;
} TaskBuffer;

// Initialize the dynamic buffer
void init_buffer(TaskBuffer *tb) {
    tb->count = 0;
    tb->capacity = 2; // Start small to test realloc
    tb->tasks = (TechTask *)malloc(tb->capacity * sizeof(TechTask));
}

// 3. MATH LOGIC: Prime Factorization Function (from previous session)
void factorize(int n) {
    printf("Factors of %d: ", n);
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2) printf("%d", n);
    printf("\n");
}

// 4. FILE I/O: Saving the state to a permanent file
void save_tasks(TaskBuffer *tb) {
    FILE *file = fopen("engineering_log.txt", "w");
    if (file == NULL) return;

    for (int i = 0; i < tb->count; i++) {
        fprintf(file, "%d,%s,%d\n", tb->tasks[i].id, tb->tasks[i].title, tb->tasks[i].complexity_score);
    }
    fclose(file);
    printf("[System] Data successfully committed to engineering_log.txt\n");
}

int main() {
    TaskBuffer tb;
    init_buffer(&tb);
    char input_title[50];
    int input_score;

    printf("--- TECH COMMAND CENTER ---\n");

    while (1) {
        printf("\nEnter Task Title (or 'exit' to finish): ");
        scanf("%s", input_title);

        if (strcmp(input_title, "exit") == 0) break;

        printf("Enter Complexity Score (integer): ");
        scanf("%d", &input_score);

        // Resize logic (DMA)
        if (tb.count == tb.capacity) {
            tb.capacity *= 2;
            tb.tasks = (TechTask *)realloc(tb.tasks, tb.capacity * sizeof(TechTask));
            printf("[Log] Buffer expanded to %d\n", tb.capacity);
        }

        // Assigning data using pointers
        tb.tasks[tb.count].id = tb.count + 1;
        strcpy(tb.tasks[tb.count].title, input_title);
        tb.tasks[tb.count].complexity_score = input_score;
        
        // Run math processing on the input
        factorize(input_score);

        tb.count++;
    }

    save_tasks(&tb);

    // 5. MEMORY CLEANUP: Preventing leaks
    free(tb.tasks);
    printf("Memory released. Program exiting.\n");

    return 0;
}