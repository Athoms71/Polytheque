#include "date.h"
#include <iostream>

class Emprunt
{
public:
    // Constructeur
    Emprunt(Date dateEmprunt, std::string isbn, std::string idLecteur);

    // Getters
    Date getDateEmprunt() const;
    std::string getISBN() const;
    std::string getIDLecteur() const;

    // Setters
    void setDateEmprunt(Date dateEmprunt);
    void setISBN(std::string isbn);
    void setIDLecteur(std::string idLecteur);

private:
    Date _dateEmprunt;
    std::string _isbn;
    std::string _idLecteur;
};