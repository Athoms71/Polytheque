#include "lecteur.h"

Lecteur::Lecteur(std::string ID, std::string lastName, std::string name, std::vector<std::string> listeISBN) {
    _ID = ID;
    _lastName = lastName;
    _name = name;
    _listeISBN = listeISBN;
}

std::string Lecteur::getID() {
    return _ID;
}

std::string Lecteur::getLastName() {
    return _lastName;
}

std::string Lecteur::getName() {
    return _name;
}

std::vector<std::string> Lecteur::getListeISBN() {
    return _listeISBN;
}

void Lecteur::setID(std::string ID) {
    _ID = ID;
}

void Lecteur::setName(std::string Name) {
    _name = Name;
}

void Lecteur::setLastName(std::string LastName) {
    _lastName = LastName;
}

void Lecteur::setListeISBN(std::vector<std::string> ListeISBN) {
    _listeISBN = ListeISBN;
}