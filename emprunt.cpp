#include "emprunt.h"

// Constructeur
Emprunt::Emprunt(Date dateEmprunt, std::string isbn, std::string idLecteur)
{
    _dateEmprunt = dateEmprunt;
    _isbn = isbn;
    _idLecteur = idLecteur;
}

// Getters
Date Emprunt::getDateEmprunt() const
{
    return _dateEmprunt;
}

std::string Emprunt::getISBN() const
{
    return _isbn;
}

std::string Emprunt::getIDLecteur() const
{
    return _idLecteur;
}

// Setters
void Emprunt::setDateEmprunt(Date dateEmprunt)
{
    _dateEmprunt = dateEmprunt;
}

void Emprunt::setISBN(std::string isbn)
{
    _isbn = isbn;
}

void Emprunt::setIDLecteur(std::string idLecteur)
{
    _idLecteur = idLecteur;
}
