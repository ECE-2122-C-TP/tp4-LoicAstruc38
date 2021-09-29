#include <stdio.h>

/* Fonction qui donne le maximum entre 2 nombres
 * -> IN : les deux nombres entiers que l'on veut comparer
 * -> OUT : le plus grand des 2 nombres
 */
int getMax(int a, int b){
    if (a >= b){
        return a;}
    else {
        return b;}
    }


/* Fonction qui demande à l'utilisateur de saisir un entier
 * -> IN : none
 * -> OUT : l'entier saisi par l'utilisateur
 */
int saisirEntier(){
    int entier = 0;
    printf("Saisissez un entier \n");
    scanf("%d", &entier);
    return entier;
}


/* Fonction qui permet de calculer l'aire d'un rectangle
 * -> IN : la longueur et la largeur du rectangle (2 entiers)
 * -> OUT : l'aire du rectangle (entier)
 */
int calculAire(int a, int b){
    return (a * b);
}


/* Fonction qui permet de calculer le périmètre d'un rectangle
 * -> IN : la longueur et la largeur du rectangle (2 entiers)
 * -> OUT : le périmètre du rectangle (entier)
 */
int calculPerimetre(int a, int b){
    return ((a+b)*2);
}


/* Fonction qui permet de savoir si un nombre est le multiple d'un autre
 * -> IN : les deux nombres en question (2 entiers)
 * -> OUT : 1 (Vrai) ou 0 (Faux)
 */
int multipleAB (int a, int b){
    if (a%b == 0){
        return 1;}
    else{
        return 0;}
}


/* Fonction qui permet de calculer la moyenne de 3 notes
 * -> IN : les 3 notes en questions (3 entiers)
 * -> OUT : la moyenne (entier)
 */
float calculMoyenne(float a, float b, float c){
    if (a <= 0 && a >= 20 || b <= 0 && b >= 20 || c <= 0 && c >= 20){
        return ((a + b + c) / 3);}
    else{
        return -1;}
}