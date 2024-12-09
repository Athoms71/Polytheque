#include <iostream>
#include <vector>
#include "auteur.h"
#include "date.h"
#include "emprunt.h"
#include "lecteur.h"
#include "livre.h"

class Bibliotheque {
public:
    Bibliotheque();
    void addLecteur(const Lecteur& lecteur);
    void addLivre(const Livre& livre);
    void addAuteur(const Auteur& auteur);

    // Getters
    std::vector<Auteur> getAuteurs();
    std::vector<Livre> getLivres();
    std::vector<Lecteur> getLecteurs();

    // Setters
    void setAuteurs(std::vector<Auteur> listeAuteurs);
    void setLivres(std::vector<Livre> listeLivres);
    void setLecteurs(std::vector<Lecteur> listeLecteurs);

    // Add one at vector's end
    void addAuteur(Auteur auteur);
    void addLivre(Livre livre);
    void addLecteur(Lecteur lecteur);

    // Remove last one
    void rmAuteur();
    void rmLivre();
    void rmLecteur();

private:
    std::vector<Auteur> _listeAuteurs;
    std::vector<Livre> _listeLivres;
    std::vector<Lecteur> _listeLecteurs;
};