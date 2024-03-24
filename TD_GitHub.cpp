#include 'TD_GitHub.h'
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//Fonctions réalisées par l'étudiant 1 :
//Majorité
bool estMajeur(int age) {
    return (age >= 18 || age < 0); // Une personne est majeure si son âge est >= 18 ou si l'âge est négatif
}
//exposant
int exposant(int nbre, int exp) {
    int resultat = 1;
    for (int i = 0; i < exp; ++i) {
        resultat *= nbre;
    }
    return resultat;
}
//TVA
float TVA(int prix) {
    if (prix >= 1000) {
        return prix * 1.196f; // 19.6% de TVA
    } else {
        return prix * 1.055f; // 5.5% de TVA
    }
}
//Taille
int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}



//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb)
{
    if (nb % 2 == 0 || nb % 7 == 0) {
        return true;
    } else {
        return false;
    }
}


int sommeNombre(int nb) 
{
    int somme = 0;
    for (int i = 1; i <= nb; ++i) 
    {
        somme += i;
    }
    return somme;
}


float salaireNet(int salaire)
{
    salaire = salaire * 0.77;

    salaire = salaire * 1.12;

    return salaire;
}


int plusPetit(int a, int b, int c) {
    int min = a; 


    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}












//Fonctions réalisées par l'étudiant 3 :
