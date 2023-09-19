#include <stdio.h>

int main() {
   
    int age;

    
    printf("Entrez l'âge : ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("The person is an adult.\n");
    } else {
        printf("The person is a minor.\n");
    }

    return 0;
}
