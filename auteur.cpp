#include "auteur.h"

// Constructeur
Auteur::Auteur(std::string id, std::string nom, std::string prenom, Date naissance)
{
    _id = id;
    _nom = nom;
    _prenom = prenom;
    _naissance = naissance;
}

// Getters
std::string Auteur::getID() const
{
    return _id;
}

std::string Auteur::getNom() const
{
    return _nom;
}

std::string Auteur::getPrenom() const
{
    return _prenom;
}

Date Auteur::getNaissance() const
{
    return _naissance;
}

// Setters
void Auteur::setID(std::string id)
{
    _id = id;
}

void Auteur::setNom(std::string nom)
{
    _nom = nom;
}

void Auteur::setPrenom(std::string prenom)
{
    _prenom = prenom;
}

void Auteur::setNaissance(Date naissance)
{
    _naissance = naissance;
}
