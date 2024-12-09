#include "date.h"
#include "lecteur.h"
#include <iostream>

int main() {
    Date d1(1,5,2016);
    std::cout << "d1: " << d1.getMonth() << "/" << d1.getDay() << "/" << d1.getYear() << std::endl;

    std::vector<std::string> listeISBN = {"978-3-16-148410-0", "978-1-4028-9462-6", "978-0-262-13472-9"};
    Lecteur l1("12345", "Dupont", "Jean", listeISBN);
    std::cout << "ID du lecteur : " << l1.getID()
    << " Nom de famille : " << l1.getLastName()
    << " Prenom : " << l1.getName()  << std::endl;

    std::cout << "Liste des ISBN : " << std::endl;
    for (const std::string& isbn : l1.getListeISBN()) {
        std::cout << " - " << isbn << std::endl;
    }

    return 0;
}