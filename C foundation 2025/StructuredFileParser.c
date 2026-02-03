#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    int score;
}student;

int main(){
    FILE *file = fopen("input.txt", "r");
    
    if (file == NULL){
        printf("Error: Could not open input.txt. Please create it first. \n");
        return 1;
    }

    student students[100];
    chat line[100];
    int count = 0;

    printf("---High Scores (>80)---\n");

    while(fgets(line, sizeof(line), file)){

        char *name_token = strtok(line, ",");
        char *age_token = strtok(NULL, ",");
        char *score_token = strtok(NULL, ",");

        if(name_token && age_token && score_token){
            strcpy(students[count].name, name_token);
            students[count].age = atoi(age_token);
            students[count].score = atoi(score_token);

            if (students[count].score > 80){
                printf("Name: %-15s | Score: %d\n", students[count].name, students[count].score);
            }
            count++;
        }
    }
}