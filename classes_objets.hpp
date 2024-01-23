#pragma once
#include <vector>
#include <iostream>
#include "classes.hpp"
#include "classes_perso.hpp"

class Objet : public Element {
    int duree_vie ;
} ;

class Potion : public Objet {
    int modif_vie ;
    int modif_attaque ;
    int modif_defense ;

void touche(Personnage p) {
    p.vie = p.vie + modif_vie ;
    p.attaque = p.attaque + modif_attaque ;
    p.defense = p.defense + modif_defense ;
}

} ;


class Arme: public Objet {
    int modif_attq ;

void touche(Personnage p) {
    p.attaque = p.attaque + modif_attq ;
}
} ;

class Armure : public Objet {
    int modif_def ;

} ;


class Piege : public Objet {
    int modif_vie ;

} ;


class Coffre : public Objet {
    int richesse ; 

} ;

