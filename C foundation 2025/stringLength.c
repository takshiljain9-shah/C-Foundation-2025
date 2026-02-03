#include <stdio.h>

int main(){
    char name[] = "Takshil_Jain";
    char *ptr = name;
    int count = 0;

    while (*ptr != '\0'){
        count++;
        ptr++;
    }
    printf("---string Logic ---\n");
    printf("The string %s\n", name);
    printf("Length Calculated via pointers: %d\n", count);

    return 0;
}