#ifndef FIB_H
#define FIB_HPP

#include "global.h"

using ull = unsigned long long;

class Fib
{
public:
	void Start();
private:
	bool isRunning = true;
	int kontynuowac;
	ull FibRekur(int n);
	void Fib3zmi(int n);
	void FibTab(int n);
};

#endif // !FIB_H