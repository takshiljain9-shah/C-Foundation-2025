#include <stdio.h>

void manualCopy(char *target, char *source){
    while (*source != '\0'){
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}

int main(){
    char original[] = "CSE_CORE_2026";
    char duplicate[20];

    manualCopy(duplicate, original);

    printf("Original String: %s (Address: %p)\n", original, (void*)&original);
    printf("Copied String: %s (Address: %p)\n", duplicate, (void*)&duplicate);

    return 0;
}