#ifndef Armes_h
#define Armes_h

#include <iostream>
#include <string>

class Arme
{
private :
    std::string m_nomarme;
    int m_puissancearme;
public :
    Arme();
    Arme( std:: string nomarme, int puissancearme);
    void changerarme(std::string nomarme, int puissance);
    void afficher() const;
    int getpuissance() const;
};
#include "Armes.cpp"
#endif