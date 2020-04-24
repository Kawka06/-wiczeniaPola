#include <iostream>
#include "funkcjek.h"
#define PI 3.14

using namespace std;

void MenuBox()						/* funkcja wywo³uj¹ca menu wyboru opcji programu*/
{
	cout << " Wybierz opcje: " << endl;
	cout << "1. Pole Kola " << endl;
	cout << "2. Pole Kwadratu " << endl;
	cout << "3. Pole Prostokata " << endl;
	cout << "4. Pole Trojkata " << endl;
}

void MenuDecision(int wybor)	 /*  funkcja odpowiadaj¹ca za wybór u¿ytkownia danej opcji oraz przekazuj¹ca podane przez niego dane do dalszych funkcji */
{
	double a, b, h, r;
	switch (wybor)
	{
	case 1:
		cout << "Podaj promien kola: " << endl;
		cin >> r;
		poleKola(r);
		break;
	case 2:
		cout << "Podaj bok kwadratu: " << endl;
		cin >> a;
		poleKwadratu(a);
		break;
	case 3:
		cout << "Podaj szerokosc i wysokosc prostokata: " << endl;
		cin >> a >> b;
		poleProstokata(a, b);
		break;
	case 4:
		cout << "Podaj podstawe oraz wysoksoc trojkata: " << endl;
		cin >> a >> h;
		poleTrojkata(a, h);
		break;
	default:
		cout << "Na pewno nie wybrales odpowiedniej opcji z menu " << endl;

	}
}

double poleKola(double r)
{
	double wynik = PI * r * r;

	cout << "Pole kola o promieniu: " << r << " wynosi " << wynik << endl;

	return wynik;
}

double poleKwadratu(double a)
{
	double wynik = a * a;

	cout << "Pole kwadratu o boku: " << a << " wynosi " << wynik << endl;

	return wynik;
}

double poleProstokata(double a, double b)
{
	double wynik = a * b;

	cout << "Pole prostokata o szerokosci: " << a << " i wysokosci: " << b << " wynosi: " << wynik << endl;

	return wynik;
}

double poleTrojkata(double a, double h)
{
	double wynik = (a * h) / 2;

	cout << "Pole trojkata o podstawie: " << a << " i wysokosci: " << h << " wynosi: " << wynik << endl;

	return wynik;
}
