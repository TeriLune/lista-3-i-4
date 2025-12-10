#include "poleTrojStruct.h"
#include <cmath>   

float poleTrojStruct::PoleTrojkata(const Trojkat& T) {
    float d = 0.5f * ((T.B.x - T.A.x) * (T.C.y - T.A.y) - (T.B.y - T.A.y) * (T.C.x - T.A.x));
    return std::fabs(d);
}

void poleTrojStruct::Start() {
    while (isRunning) {
        Trojkat T;

        std::cout << "Podaj wspolrzedne wierzcholka A (Ax Ay): ";
        std::cin >> T.A.x >> T.A.y;
        std::cout << "Podaj wspolrzedne wierzcholka B (Bx By): ";
        std::cin >> T.B.x >> T.B.y;
        std::cout << "Podaj wspolrzedne wierzcholka C (Cx Cy): ";
        std::cin >> T.C.x >> T.C.y;

        float pole = PoleTrojkata(T);

        if (pole < 1e-6) {
            std::cout << "Podane punkty sa wspolliniowe, pole trojkata wynosi 0." << std::endl;
        }
        else {
            std::cout << "Pole trojkata wynosi: " << pole << std::endl;
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
