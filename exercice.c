#include <stdio.h>
#include "fonctions.h"

void exercice_1 (){
    int a = 0, b = 0;
    printf("Saisissez un entier :\n");
    scanf("%d", &a);
    printf("Saisissez un entier :\n");
    scanf("%d", &b);
    printf("Le plus grand est %d", getMax(a,b));
    return;
}

void exercice_2 (){
    int a = saisirEntier();
    printf("%d", a);
    return;
}

void exercice_3 (){
    int longueur = saisirEntier(), largeur = saisirEntier();
    printf("L'aire du rectangle est : %d \n", calculAire(longueur, largeur));
    printf("Le perimetre du rectangle est : %d \n", calculPerimetre(longueur, largeur));
    return;
}

void exercice_4 (){
    int a = saisirEntier(), b = 3, c = 10;
    if (multipleAB(a,b) == 1){
        printf("L'entier saisi est un multiple de 3 \n");}
    else {
        printf("L'entier saisi n'est pas un multiple de 3 \n");}
    if (a >= c){
        printf("L'entier saisi est superieur ou egal a %d \n", c);}
    return;
}

void exercice_5 (){
    int a =saisirEntier(), b = saisirEntier(), c = saisirEntier();
    printf("La moyenne des 3 notes est %d", calculMoyenne(a,b,c));
    return;
}