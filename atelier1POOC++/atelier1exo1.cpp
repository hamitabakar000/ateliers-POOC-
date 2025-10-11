// atelier1.cpp
// Correction : le fichier original contenait des expressions au niveau global
// (par ex. "p+3;" ou "cout << ...;"), ce qui n'est pas permis en C++.
// Toutes les instructions exécutables doivent être dans une fonction (par ex. main()).

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// variables
	char c = '\x10'; // valeur hex 0x10 (décimal 16) — caractère de contrôle non imprimable
	short int p = 10;

	// calculer et stocker les résultats des expressions
	int sum1 = p + 3;           // p est promu en int
	int sum2 = c + p;           // c est promu en int (signe dépend de l'implémentation)
	int expr = 3 * c + 5 * p;

	// Afficher les valeurs. On caste 'c' en int pour voir sa valeur numérique
	cout << "p = " << p << '\n';
	cout << "c (as int) = " << static_cast<int>(c) << '\n';
	cout << "p+3 = " << sum1 << '\n';
	cout << "c+p = " << sum2 << '\n';
	cout << "3*c + 5*p = " << expr << '\n';

	return 0;
}