#include "Fib.h"
#include <vector>

ull Fib::FibRekur(int n) {
    if (n <= 1) return static_cast<ull>(n);
    return FibRekur(n - 1) + FibRekur(n - 2);
}

void Fib::Fib3zmi(int n) {
    ull a = 0, b = 1, c;
	std::cout << "1. " << a << "\n";
	std::cout << "2. " << b << "\n";
    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        std::cout << i + 1<< ". " << c << "\n";
    }
}

void Fib::FibTab(int n) {
    std::vector<ull> tab = { 0, 1 };
    for (int i = 2; i < n + 2; i++) {
        tab.push_back(tab[i - 1] + tab[i - 2]);
    }
    for (int i = 0; i < n + 2; i++) {
        std::cout << i+1 << ". " << tab[i] << "\n";
    }
}

void Fib::Start() {
    int opcja;

    while (isRunning) {

        std::cout << "wybierz czêœæ programu któr¹ chcesz wykonaæ:\n"
            << "1. Obliczenie ci¹gu fibbonaciego przy u¿yciu tablicy.\n"
            << "2. Obliczenie ci¹gu fibbonaciego przy u¿yciu rekurencji.\n"
            << "3. Obliczenie ci¹gu fibbonaciego przy u¿yciu trzech zmiennych\n"
            << "Opcja: ";

        std::cin >> opcja;

        int dlug;
        std::cout << "Podaj dlugosc ci¹gu: ";
        std::cin >> dlug;

        switch (opcja) {
        case 1:
            FibTab(dlug - 2);
            break;

        case 2:
            for (int i = 0; i < dlug; i++) {
                std::cout << i + 1 << ". " << FibRekur(i) << "\n";
            }
            break;

        case 3:
            Fib3zmi(dlug);
            break;
        }
        std::cout << "Czy chcesz kontynuowac?\n1. Tak\n2. Nie ";

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
