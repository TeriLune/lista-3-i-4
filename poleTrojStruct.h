#ifndef POLETROJSTRUCT_H
#define POLETROJSTRUCT_HPP

#include "global.h"

struct PunktTroj {
    float x;
    float y;
};

struct Trojkat {
    PunktTroj A;
    PunktTroj B;
    PunktTroj C;
};

class poleTrojStruct
{
public:
    void Start();
private:
    int kontynuowac;
    bool isRunning = true;

    float PoleTrojkata(const Trojkat& T);
};

#endif // POLETROJSTRUCT_H
