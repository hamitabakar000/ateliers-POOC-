#include<iostream>
#include<iomanip>
using namespace std;
int main()
{// declaration des variables
char c = '\x05'; // valeur hex 0x05 (décimal 5)
int n=5;
long p = 1000;
float x = 2.5;
double z = 5.5;

long sum1 = c + n + p; // c et n sont promus (habituellement) en int puis convertis en long pour l'addition
long sum2 = static_cast<long>(2 * x) + p; // 2*x est flottant; on convertit explicitement en long si on veut la partie entière
char expr = static_cast<char>(n + c); // conversion explicite vers char (peut tronquer)
float sum3 = static_cast<float>(z + 2.0); // z + 2.0 est en double, puis converti en float

cout << "c (as int) = " << static_cast<int>(c) << '\n'; // caster c en int pour voir sa valeur numérique
cout << "n = " << n << '\n';        
cout << "p = " << p << '\n';
cout << "x = " << x << '\n';
cout << "z = " << z << '\n';
cout << "c+n+p = " << sum1 << '\n';
cout << "2*x + p = " << sum2 << '\n';
cout << "n+c = " << static_cast<int>(expr) << '\n'; // caster expr en int pour voir sa valeur numérique
cout << "z + 2 = " << sum3 << '\n';
return 0;
}
// Résultat les valeurs sont de types long, long 