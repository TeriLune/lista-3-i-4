#ifndef PROSTASTRUCT_H
#define PROSTASTRUCT_HPP

#include "global.h"
#include <iostream>
#include <cmath>

struct PunktProsta {
    float x;
    float y;
};

class ProstaStruct
{
public:
    void start();
private:
    int kontynuowac;
    bool isRunning = true;

    bool CzyLezaNaProstej(const PunktProsta& A, const PunktProsta& B, const PunktProsta& C);
};

#endif // PROSTASTRUCT_H
