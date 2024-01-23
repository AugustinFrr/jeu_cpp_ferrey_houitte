#include <iostream>
#include "plateau.hpp"

Personnage choix_perso(){
    std::cout << "Vous avez le choix entre 3 personnages : " << std::endl;
    std::cout << "1. Le guerrier" << std::endl;
    std::cout << "2. Le mage" << std::endl;
    std::cout << "3. Le voleur" << std::endl;

    int choix;
    std::cin >> choix;
    std::cout << "Vous avez choisi le personnage numéro " << choix << std::endl;
    std::cout << "Vous vous appelez : " << std::endl;
    
    std::string nom;
    std::cin >> nom;
    std::cout << "Bienvenue " << nom << std::endl;
    return Personnage(choix, nom);
};



int main() {
    std::cout << "Bienvenue dans le jeu Légende des anciens" << std::endl;
    
    Game game = Game();

    Game.hero = choix_perso();

    std::cout << "Vous vous trouvez dans la grotte du grand méchant dragon qui va vous croquer tout cru à raison d'un doigt tous les 36 du mois." << std::endl;
    std::cout << "- OOoookay trankille en vrai " << std::endl;
    std::cout << "Vous avez le choix entre 3 portes : " << std::endl;
    std::cout << "1. La porte de gauche" << std::endl;
    std::cout << "2. La porte du milieu" << std::endl;
    std::cout << "3. La porte de droite" << std::endl;
    
    int choix;
    std::cin >> choix;
    std::cout << "Vous avez choisi la porte numéro " << choix << std::endl;

    return 0;
}