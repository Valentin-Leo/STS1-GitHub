#include 'TD_GitHub.h'
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//Fonctions réalisées par l'étudiant 1 :










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
