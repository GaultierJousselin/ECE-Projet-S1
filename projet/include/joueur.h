#ifndef JOUEUR_H
#define JOUEUR_H

#include "carte.h"

class joueur
{
    public:
        joueur();
        ~joueur();

        std::string Getnom() { return m_nom; }
        void Setnom(std::string val) { m_nom = val; }
        int Getpv() { return m_pv; }
        void Setpv(int val) { m_pv = val; }
        std::stack <carte> Getpioche() { return m_pioche; }
        void Setpioche(std::stack <carte> val) { m_pioche = val; }
        std::stack <carte> Getdefausse() { return m_defausse; }
        void Setdefausse(std::stack <carte> val) { m_defausse = val; }
        std::stack <carte> Getmain() { return m_main; }
        void Setmain(std::stack <carte> val) { m_main = val; }
        std::stack <carte> Getenergie() { return m_energie; }
        void Setenergie(std::stack <carte> val) { m_energie = val; }
        std::stack <carte> Getcreature() { return m_creature; }
        void Setcreature(std::stack <carte> val) { m_creature = val; }
        std::stack <carte> Getspecial() { return m_special; }
        void Setspecial(std::stack <carte> val) { m_special = val; }

        void Melanger(std::stack <carte> * val);

    protected:

    private:
        std::string m_nom;
        int m_pv;
        std::stack <carte> m_pioche;
        std::stack <carte> m_defausse;
        std::stack <carte> m_main;
        std::stack <carte> m_energie;
        std::stack <carte> m_creature;
        std::stack <carte> m_special;
};

#endif // JOUEUR_H
