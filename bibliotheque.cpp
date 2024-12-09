#include "bibliotheque.h"

void Biblioteque::addLecteur(const Lecteur& lecteur) {
    _listeLecteurs.push_back(lecteur);
    std::cout << "Lecteur ajouté : " << lecteur.getName() << " " << lecteur.getLastName() << std::endl;
}

void Biblioteque::addLivre(const Livre& livre) {
    _listeLivres.push_back(livre);
    std::cout << "Livre ajouté : " << livre.getTitre() << std::endl;
}

void Biblioteque::addAuteur(const Auteur& auteur) {
    _listeAuteurs.push_back(auteur);
    std::cout << "Auteur ajouté : " << auteur.getPrenom() << " " << auteur.getNom() << std::endl;
}