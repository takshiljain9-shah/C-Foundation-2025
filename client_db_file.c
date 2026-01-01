#include <stdio.h>

struct Client {
    char name[50];
    int budget;
};

int main() {
    FILE *fp;
    struct Client c1 = {"Gym_Owner_Jaipur", 5000}; 
    
    fp = fopen("clients.csv", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Client Name: %s, Budget: %d\n", c1.name, c1.budget);
    
    fclose(fp);
    printf("Success! Client data saved. Check your folder for 'clients.csv'.\n");

    return 0;
}