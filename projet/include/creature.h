#ifndef CREATURE_H
#define CREATURE_H

#include "carte.h"

struct attaque
{
    std::string nom;
    std::string description;
    int degat;
};

//Coucou ma couille
class creature : public carte
{
    public:
        creature();
        creature(std::string nom, std::string description, int pv, std::vector <attaque> attaque);
        ~creature();

        int Getpv() { return m_pv; }
        void Setpv(int val) { m_pv = val; }
        std::vector <attaque> Getattaque() { return m_attaque; }
        void Setattaque(std::vector <attaque> val) { m_attaque = val; }

    protected:

    private:
        int m_pv;
        std::vector <attaque> m_attaque;
};

#endif // CREATURE_H
