#include "poleTroj.h"
#include <iostream>
#include <cmath>

float poleTroj::PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float d = 0.5f * ((Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax));
    return std::fabs(d);
}

void poleTroj::Start() {
	while (isRunning) {
		float Ax, Ay;
		float Bx, By;
		float Cx, Cy;

		std::cout << "Podaj wspolrzedne wierzcholka A (Ax Ay): ";
		std::cin >> Ax >> Ay;
		std::cout << "Podaj wspolrzedne wierzcholka B (Bx By): ";
		std::cin >> Bx >> By;
		std::cout << "Podaj wspolrzedne wierzcholka C (Cx Cy): ";
		std::cin >> Cx >> Cy;
		if (PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy) < 1e-6) {
			std::cout << "Podane punkty sa wspolliniowe, pole trojkata wynosi 0." << std::endl;
		}
		else {
			std::cout << "Pole trojkata wynosi: " << PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy) << std::endl;
		}

		std::cout << "Czy chcesz podac nowe punkty?\n1. Tak\n2. Nie ";

		std::cin >> kontynuowac;
		system("cls");

		if (kontynuowac == 2) {
			system("cls");
			isRunning = false;
		}
	}
}
