#include <stdio.h>
#include <string.h>

struct Lead {
    char name[50];
    float budget;
};

void updateBudget(struct Lead *ptr) {

    printf("\n--- Negotiating for %s ---\n", ptr->name);
    ptr->budget = ptr->budget * 1.10; 
}

int main() {
    struct Lead l1 = {"JECRC_Project_Alpha", 8000.0};

    printf("Initial Budget: %.2f\n", l1.budget);

    updateBudget(&l1);

    printf("Updated Budget (after 10%% hike): %.2f\n", l1.budget);

    return 0;
}