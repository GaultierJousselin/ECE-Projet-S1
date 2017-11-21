#ifndef ENERGIE_H
#define ENERGIE_H

#include "carte.h"

class energie : public carte
{
    public:
        energie();
        energie(std::string nom, std::string description, int type);
        ~energie();

        int Gettype() { return m_type; }
        void Settype(int val) { m_type = val; }

    protected:

    private:
        int m_type;
};

#endif // ENERGIE_H
