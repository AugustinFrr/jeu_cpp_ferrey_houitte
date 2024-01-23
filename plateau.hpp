#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include "classes.hpp"
#include "classes_perso.hpp"
#include "classes_objets.hpp"


class Game {
public:
    int taille_plateau_x ;
    int taille_plateau_y ;
    std::vector<Element*> Plateau ;

Game(int Lx, int Ly, std::vector<Element*> p) : taille_plateau_x(Lx), taille_plateau_y(Ly), Plateau(p) {} ;


void add_potion(Potion p, int x, int y) {
    Plateau.at(x*taille_plateau_x + y) = p ;

} ;

void play() {
    while (true) {



    } ;
}




} ;