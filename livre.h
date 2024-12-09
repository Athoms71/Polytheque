#include <iostream>
#include <vector>
#include "date.h"
#include "auteur.h"

class Livre
{
public:
    Livre(std::string titre, Auteur auteur, std::string langue, std::string genre, Date publication, std::string isbn, std::vector<std::string> listeLecteurs, bool etat);

    // Setters
    void setTitre(std::string titre);
    void setAuteur(Auteur auteur);
    void setLangue(std::string langue);
    void setGenre(std::string genre);
    void setAnnee(Date publication);
    void setISBN(std::string isbn);
    void setListe(std::vector<std::string> listeLecteurs);
    void setEtat(int etat);

    // Getters
    std::string getTitre() const;
    Auteur getAuteur() const;
    std::string getLangue() const;
    std::string getGenre() const;
    Date getAnnee() const;
    std::string getISBN() const;
    std::vector<std::string> getListe() const;
    bool getEtat() const;

private:
    std::string _titre;
    Auteur _auteur;
    std::string _langue;
    std::string _genre;
    Date _publication;
    std::string _isbn;
    std::vector<std::string> _listeLecteurs;
    bool _etat;
};