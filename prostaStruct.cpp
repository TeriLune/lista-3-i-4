#include "prostaStruct.h"
#include <cstdlib>

bool ProstaStruct::CzyLezaNaProstej(const PunktProsta& A, const PunktProsta& B, const PunktProsta& C) {
    float d = (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
    return std::fabs(d) < 1e-6;
}

void ProstaStruct::start() {
    while (isRunning) {
        PunktProsta A, B, C;

        std::cout << "Podaj wspolrzedne punktu A (Ax Ay): ";
        std::cin >> A.x >> A.y;
        std::cout << "Podaj wspolrzedne punktu B (Bx By): ";
        std::cin >> B.x >> B.y;
        std::cout << "Podaj wspolrzedne punktu C (Cx Cy): ";
        std::cin >> C.x >> C.y;

        if (CzyLezaNaProstej(A, B, C)) {
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
