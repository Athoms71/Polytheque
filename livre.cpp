#include "livre.h"

// Constructeur
Livre::Livre(std::string titre, std::string auteur, std::string langue, std::string genre, Date publication, std::string isbn, std::vector<std::string> listeISBN)
{
    _titre = titre;
    _auteur = auteur;
    _langue = langue;
    _genre = genre;
    _publication = publication;
    _isbn = isbn;
    _listeISBN = listeISBN;
}

// Setters
void Livre::setTitre(std::string titre)
{
    _titre = titre;
}
void Livre::setAuteur(std::string auteur)
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
void Livre::setListe(std::vector<std::string> listeISBN)
{
    _listeISBN = listeISBN;
}

// Getters
std::string Livre::getTitre()
{
    return _titre;
}
std::string Livre::getAuteur()
{
    return _auteur;
}
std::string Livre::getLangue()
{
    return _langue;
}
std::string Livre::getGenre()
{
    return _genre;
}
Date Livre::getAnnee()
{
    return _publication;
}
std::string Livre::getISBN()
{
    return _isbn;
}
std::vector<std::string> Livre::getListe()
{
    return _listeISBN;
};