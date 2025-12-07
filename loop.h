#ifndef LOOP_H
#define LOOP_HPP

#include "global.h"

class Loop
{
public:
	void run();
private:
	bool isRunning = true;
	int opcja;
	void mainLoop();
};

#endif // !LOOP_H
