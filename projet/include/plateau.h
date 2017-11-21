#ifndef PLATEAU_H
#define PLATEAU_H

#include <stack>
#include "carte.h"

class plateau
{
    public:
        plateau();
        ~plateau();

        std::stack<carte> Getpioche() { return pioche; }
        void Setpioche(std::stack<carte> val) { pioche = val; }
        std::stack<carte> Getcimetiere() { return cimetiere; }
        void Setcimetiere(std::stack<carte> val) { cimetiere = val; }
        std::stack<carte> Getmain() { return main; }
        void Setmain(std::stack<carte> val) { main = val; }
        std::stack<carte> Getenergie() { return energie; }
        void Setenergie(std::stack<carte> val) { energie = val; }
        std::stack<carte> Getcreature() { return creature; }
        void Setcreature(std::stack<carte> val) { creature = val; }
        std::stack<carte> Getspecial() { return special; }
        void Setspecial(std::stack<carte> val) { special = val; }

    protected:

    private:
        std::stack<carte> pioche;
        std::stack<carte> cimetiere;
        std::stack<carte> main;
        std::stack<carte> energie;
        std::stack<carte> creature;
        std::stack<carte> special;
};

#endif // PLATEAU_H
