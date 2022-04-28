#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define Zad3

#ifdef Zad3

struct Punkt {
	double x, y;
};

Punkt* alokacja(size_t rozmiar){
	 return new(std::nothrow) Punkt[rozmiar] {};
}

//void wypelnij(Punkt* p,size_t rozmiar, double a, double b, double xd, double xg) {
//	double dx;
//	int i = 0;
//	dx = (xg - xd) / rozmiar - 1;
//	for (double x = xd; x <= xg; x += dx) {
//		p[i].x = x;
//		p[i].y = a * x + b;
//		i++;
//	}
//}

void wypelnij(Punkt* p, size_t rozmiar, double a, double b, double xd, double xg) {
	if (p == nullptr) return;
	double dx, x = xd;
	dx = (xg - xd) / (rozmiar - 1);
	for (int i = 0; i < rozmiar; i++) {
		p[i].x = x;
		p[i].y = a * x + b;
		x += dx;
	}
}
void zwolnij(Punkt **p) {
	if (*p != nullptr)
		delete[] *p;
	*p = nullptr;
}


int main() {
	Punkt *p;
	int rozmiar = 20;
	double a = 1, b = 1.5, xd = 0, xg = 20;
	p = alokacja(rozmiar);
	wypelnij(p, rozmiar, a, b, xd, xg);
	zwolnij(&p);
	if (p == nullptr)
		cout << "OK";
	else cout << "NIE";
}

#endif

#ifdef Zad4
#include "str.h"





#endif



