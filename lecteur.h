#include <iostream>
#include <vector>

class Lecteur {
    public:
    Lecteur(std::string ID, std::string lastName, std::string name, std::vector<std::string> listeISBN);

    std::string getID();
    std::string getLastName();
    std::string getName();
    std::vector<std::string> getListeISBN();
    void setID(std::string ID);
    void setLastName(std::string lastName);
    void setName(std::string name);
    void setListeISBN(std::vector<std::string> listeISBN);

    private:
    std::string _ID;
    std::string _lastName;
    std::string _name;
    std::vector<std::string> _listeISBN;
};
