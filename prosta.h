#ifndef PROSTA_H
#define PROSTA_HPP

#include "global.h"

class Prosta
{
public:
	void start();
private:
	int kontynuowac;
	bool isRunning = true;
	bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy);
};

#endif // !PROSTA_H
