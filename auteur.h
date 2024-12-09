#include <iostream>
#include "date.h"

class Auteur
{
public:
    // Constructeur
    Auteur() : _id(""), _nom(""), _prenom(""), _naissance(Date()) {};
    Auteur(std::string id, std::string nom, std::string prenom, Date naissance);

    // Getters
    std::string getID();
    std::string getNom();
    std::string getPrenom();
    Date getNaissance();

    // Setters
    void setID(std::string id);
    void setNom(std::string nom);
    void setPrenom(std::string prenom);
    void setNaissance(Date naissance);

private:
    std::string _id;
    std::string _nom;
    std::string _prenom;
    Date _naissance;
};