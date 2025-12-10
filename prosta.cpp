#include "prosta.h"

void Prosta::start() {
	while (isRunning) {
		float Ax, Ay;
		float Bx, By;
		float Cx, Cy;

		std::cout << "Podaj wspolrzedne punktu A (Ax Ay): ";
		std::cin >> Ax >> Ay;
		std::cout << "Podaj wspolrzedne punktu B (Bx By): ";
		std::cin >> Bx >> By;
		std::cout << "Podaj wspolrzedne punktu C (Cx Cy): ";
		std::cin >> Cx >> Cy;
		if (CzyLezaNaProstej(Ax, Ay, Bx, By, Cx, Cy)) {
			std::cout << "Punkt C lezy na prostej wyznaczonej przez punkty A i B." << std::endl;
		}
		else {
			std::cout << "Punkt C nie lezy na prostej wyznaczonej przez punkty A i B." << std::endl;
		}

		std::cout << "Czy chcesz podac nowe punkty?\n1. Tak\n2. Nie ";

		std::cin >> kontynuowac;
		system("cls");

		if (kontynuowac == 2) {
			system("cls");
			isRunning = false;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

bool Prosta::CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float d = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);
    return std::fabs(d) < 1e-6;
}
