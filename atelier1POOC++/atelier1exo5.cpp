#include <iostream>
using namespace std;

// Remplit le tableau via pointeurs
void remplir(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Entrez l'element " << i + 1 << " : ";
        cin >> *(arr + i);
    }
}

// Affiche les éléments avec arithmétique de pointeurs
void afficher(const int* arr, int n) {
    cout << "[ ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << "]" << endl;
}

// Retourne une référence vers le plus grand élément du tableau
int& trouverMax(int* arr, int n) {
    int* maxPtr = arr;
    for (int i = 1; i < n; ++i) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }
    return *maxPtr;
}

// Inverse le tableau en place (avec pointeurs et échanges)
void inverser(int* arr, int n) {
    int* debut = arr;
    int* fin = arr + n - 1;
    while (debut < fin) {
        int temp = *debut;
        *debut = *fin;
        *fin = temp;
        ++debut;
        --fin;
    }
}

// Variante avec tableau intermédiaire (non demandée dans le main)
void inverserAvecTemp(int* arr, int n) {
    int* temp = new int[n];
    for (int i = 0; i < n; ++i) {
        *(temp + i) = *(arr + n - 1 - i);
    }
    for (int i = 0; i < n; ++i) {
        *(arr + i) = *(temp + i);
    }
    delete[] temp;
}

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int* arr = new int[n];

    remplir(arr, n);

    cout << "Tableau original : ";
    afficher(arr, n);

    int& maxVal = trouverMax(arr, n);
    cout << "Maximum du tableau : " << maxVal << endl;

    // Modification directe du maximum
    cout << "Entrez une nouvelle valeur pour le maximum : ";
    cin >> maxVal;

    cout << "Tableau après modification du maximum : ";
    afficher(arr, n);

    inverser(arr, n);
    cout << "Tableau inversé : ";
    afficher(arr, n);

    delete[] arr;
    return 0;
}