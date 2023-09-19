#include <stdio.h>
#include <string.h>


struct Personne {
    char name[50];
    int age;
};

int main() {
    
    struct Personne personne;

    printf("give us a name  : ");
    scanf("%s", personne.name);

  
    printf("write the  age : ");
    scanf("%d", &personne.age);

    printf("Name : %s\n", personne.name);
    printf("Âge : %d years old \n", personne.age);

    return 0;
}
