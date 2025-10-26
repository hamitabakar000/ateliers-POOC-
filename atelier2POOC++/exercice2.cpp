#include<iostream>
#include<stdlib.h>

using namespace std;

int multiple_2(int n) {
    return(n % 2 == 0);
}
int multiple_3(int n) {
    return(n % 3 == 0);
}

int main() {
    int number;
    do{
        
    cout << "Entrer un entier: ";
    cin >> number;

    if (multiple_2(number)) {
        cout << number << " est un nombre pair" << endl;
    } 
    else {
        cout << number << " n'est pas un multiple de 2." << endl;
    }

    if (multiple_3(number)) {
        cout << number << " est un multiple de 3 et 6." << endl;
    } 
    else {
        cout << number << " n'est pas un multiple de 3 et 6." << endl;
    }
    cout << "voulez -vous continuer? (0 pour arrêter, autre pour continuer): ";
    cin >> number;      
     } while(number != 0);

    return 0;
}