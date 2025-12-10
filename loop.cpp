#include "loop.h"
#include "Fib.h"
#include "prosta.h"
#include "poleTroj.h"
#include "poleTrojStruct.h"
#include "prostaStruct.h"

void Loop::run() {
	mainLoop();
}

void Loop::mainLoop() {
	while (isRunning) {
		std::cout << "Wybierz opcje:\n1. Oblicz liczbe Fibonacciego\n2. Sprawdz prosta\n3. Oblicz pole trojkata\n4. Sprawdz prosta z wykorzystaniem punktow w postaci struct\n5. Oblicz pole trojkata z wykorzystaniem punktow w postaci struct\n6. Zakoncz program\n";
		std::cin >> opcja;
		switch (opcja)
		{
			case 1: {
				system("cls");
				Fib f;
				f.Start();
				break;
			}
			case 2: {
				system("cls");
				Prosta p;
				p.start();
				break;
			}
			case 3: {
				system("cls");
				poleTroj pt;
				pt.Start();
				break;
			}
			case 4: {
				system("cls");
				ProstaStruct ps;
				ps.start();
				break;
			}
			case 5: {
				system("cls");
				poleTrojStruct pts;
				pts.Start();
				break;
			}
			case 6: {
				isRunning = false;
				break;
			}
			default:
				system("cls");
				std::cout << "Nieprawidlowa opcja. Sprobuj ponownie.\n";

				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
		}

	}
}

