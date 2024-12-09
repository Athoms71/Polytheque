#include <iostream>
#include <vector>
#include "date.h"

class Livre
{
public:
    Livre(std::string titre, std::string auteur, std::string langue, std::string genre, Date publication, std::string isbn, std::vector<std::string> listeISBN);

    // Setters
    void setTitre(std::string titre);
    void setAuteur(std::string auteur);
    void setLangue(std::string langue);
    void setGenre(std::string genre);
    void setAnnee(Date publication);
    void setISBN(std::string isbn);
    void setListe(std::vector<std::string> listeISBN);

    // Getters
    std::string getTitre();
    std::string getAuteur();
    std::string getLangue();
    std::string getGenre();
    Date getAnnee();
    std::string getISBN();
    std::vector<std::string> getListe();

private:
    std::string _titre;
    std::string _auteur;
    std::string _langue;
    std::string _genre;
    Date _publication;
    std::string _isbn;
    std::vector<std::string> _listeISBN;
};