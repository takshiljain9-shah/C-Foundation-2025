#include <stdio.h>
#include <string.h>

struct lead{
    char name[50];
    int revenue;
};

void displayStatus(struct lead l1){
    if(l1.revenue >= 5000){
        printf("%s is a High value client\n", l1.name);
    }else{
        printf("%s is an standard lead.\n", l1.name);
    }
}

int main(){
    struct lead myLead;

    printf("Enter lead name: ");
    scanf("%s", myLead.name);

    printf("Enter Revenue: ");
    scanf("%d", &myLead.revenue);

    displayStatus(myLead);

    return 0;
}