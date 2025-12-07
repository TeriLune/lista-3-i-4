#ifndef POLETROJ_H
#define POLETROJ_HPP

#include "global.h"

class poleTroj
{
public:
	void Start();
private:
	int kontynuowac;
	bool isRunning = true;
	float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy);
};

#endif // !POLETROJ_H
