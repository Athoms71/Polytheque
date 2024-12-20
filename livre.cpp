#include "livre.h"

// Constructeur
Livre::Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, Date publication, std::string isbn, std::vector<std::string> listeLecteurs, bool etat = false)
{
    _titre = titre;
    _auteur = auteur;
    _langue = langue;
    _genre = genre;
    _publication = publication;
    _isbn = isbn;
    _listeLecteurs = listeLecteurs;
    _etat = etat;
}

// Setters
void Livre::setTitre(std::string titre)
{
    _titre = titre;
}
void Livre::setAuteur(Auteur auteur)
{
    _auteur = auteur;
}
void Livre::setLangue(std::string langue)
{
    _langue = langue;
}
void Livre::setGenre(std::string genre)
{
    _genre = genre;
}
void Livre::setAnnee(Date publication)
{
    _publication = publication;
}
void Livre::setISBN(std::string isbn)
{
    _isbn = isbn;
}
void Livre::setListe(std::vector<std::string> listeLecteurs)
{
    _listeLecteurs = listeLecteurs;
}

void Livre::setEtat(int etat)
{
    _etat = etat;
}

// Getters
std::string Livre::getTitre() const
{
    return _titre;
}
Auteur Livre::getAuteur() const
{
    return _auteur;
}
std::string Livre::getLangue() const
{
    return _langue;
}
std::string Livre::getGenre() const
{
    return _genre;
}
Date Livre::getAnnee() const
{
    return _publication;
}
std::string Livre::getISBN() const
{
    return _isbn;
}
std::vector<std::string> Livre::getListe() const
{
    return _listeLecteurs;
}
bool Livre::getEtat() const
{
    return _etat;
};