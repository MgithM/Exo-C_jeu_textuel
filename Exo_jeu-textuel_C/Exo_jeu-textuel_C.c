#include <stdio.h>
#include <string.h>

int main() {
 
    char reponse[50];
    int score = 0;

    printf("Bienvenue dans le QUIZZ AFORP !\n");
    
    // Question 1
    printf("Question 1 : Nombre de machines à café ?\n");
    printf("Votre réponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Paris") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La réponse était Paris.\n");
    }

    printf("\n");

    // Question 2
    printf("Question 2 : Dans quelle ville se trouve l'AFORP' ?\n");
    printf("Votre réponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Issy-les-Moulineaux") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La réponse était 5.\n");
    }

    printf("\n");

    // Question 3
    printf("Question 3 : Que signifie IRS ?\n");
    printf("Votre réponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Ingénierie Réseau Système") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La réponse était Leonardo da Vinci.\n");
    }

    printf("\n");

    // Affichage du score final
    printf("Votre score final : %d points.\n", score);

    return 0;
}
