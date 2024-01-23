#pragma once
#include <vector>
#include <iostream>
#include "classes.hpp"
#include "classes_objets.hpp"

class Personnage : public Element {
public:
    int vie; //Entre 0 et 10
    int attaque; //Entre 0 et 10
    int defense; //Entre 0 et 10
    int richesse; //>0
    int classe; //1 = guerrier, 2 = mage, 3 = voleur
    std::string nom;
    std::vector<Objet> sac_a_dos;

    Personnage(int classe, std::string nom) : Element(0, 0), vie(10), attaque(1), defense(1), richesse(0), classe(classe), nom(nom){};


};