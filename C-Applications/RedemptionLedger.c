#include <stdio.h>

int main(){
    int debt = 5000;
    int win;

    printf("---Redemtion Ledeger v1.0---\n");
    printf("initial debt: %d mistakes\n", debt);

    while(debt > 0){
        printf("\nEnter 'win' value to subtract: ");
        scanf("%d", &win);

        debt -= win;

        if (debt < 0) debt = 0;

        printf("Remaining Debt: %d\n", debt);

        if(debt == 0){
            printf("\nCONGRATULATIONS! System Clean. You are at zero.\n");
        }
    }
    return 0;
}