#include <stdio.h>
#include <string.h>

void reverseString(char* str){
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end++;
    }
}

int main(){
    char goal[] = "Retainer10k";
    printf("Original: %s\n", goal);

    reverseString(goal);

    printf("Reversed: %s\n", goal);
    return 0;
}