#include <stdio.h>
#include <string.h>

int main() {
 
    char reponse[50];
    int score = 0;

    printf("Bienvenue dans le QUIZZ AFORP !\n");
    
    // Question 1
    printf("Question 1 : Nombre de machines � caf� ?\n");
    printf("Votre r�ponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Paris") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La r�ponse �tait Paris.\n");
    }

    printf("\n");

    // Question 2
    printf("Question 2 : Dans quelle ville se trouve l'AFORP' ?\n");
    printf("Votre r�ponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Issy-les-Moulineaux") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La r�ponse �tait 5.\n");
    }

    printf("\n");

    // Question 3
    printf("Question 3 : Que signifie IRS ?\n");
    printf("Votre r�ponse : ");
    scanf("%s", reponse);

    if (strcmp(reponse, "Ing�nierie R�seau Syst�me") == 0) {
        printf("Correct ! +10 points.\n");
        score += 10;
    } else {
        printf("Incorrect ! La r�ponse �tait Leonardo da Vinci.\n");
    }

    printf("\n");

    // Affichage du score final
    printf("Votre score final : %d points.\n", score);

    return 0;
}
