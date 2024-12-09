#include <iostream>
#include <vector>
#include "auteur.h"
#include "date.h"
#include "emprunt.h"
#include "lecteur.h"
#include "livre.h"

class Bibliotheque
{
public:
    Bibliotheque();

private:
    std::vector<Auteur> _listeAuteurs;
    std::vector<Livre> _listeLivres;
    std::vector<Lecteur> _listeLecteurs;
};