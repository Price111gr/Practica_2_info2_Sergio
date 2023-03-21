#include <iostream>

using namespace std;

void mostrarmatriz(int);

void datos(int[][5]);

void rotar90(int [][5]);

void rotar180(int [][5]);

void rotar270(int [][5]);

int main() {

    int matriz[5][5];
    datos(matriz);
    cout << endl;
    rotar90(matriz);
    cout << endl;
    rotar180(matriz);
    cout << endl;
    rotar270(matriz);
    return 0;
}

void mostrarmatriz(int matriz[][5]) {
    for (int i=0; i<5; i++) {
        for (int x = 0; x<5; x++) {
            cout << matriz[i][x] << " ";
        }
        cout << endl;
    }
}

void datos(int(*matriz)[5]) {
    int aux = 1;

    for (int i=0; i<5; i++) {
        for (int x=0; x<5; x++) {
            matriz[i][x] = aux;
            aux++;
        }
    }

    cout<<"Matriz original: "<<endl;
    mostrarmatriz(matriz);
}

void rotar90(int matriz[][5]) {
    int nmatriz[5][5];
    int aux;
    for (int i=0; i<5; i++) {
        aux=0;
        for (int x =5; x>0; x--) {
            nmatriz[i][aux] = matriz[x-1][i];
            aux++;
        }
    }

    cout << "Matriz rotada 90: " << endl;
    mostrarmatriz(nmatriz);
}

void rotar180(int matriz[][5]) {
    int nmatriz[5][5];

    int aux=0;
    int aux2;
    for (int i=5; i>0; i--) {
        aux2=0;
        for (int x = 5; x > 0; x--) {
            nmatriz[aux][aux2] = matriz[i-1][x-1];
            aux2++;
        }
        aux++;
    }

    cout << "Matriz rotada 180: " << endl;
    mostrarmatriz(nmatriz);
}

void rotar270(int matriz[][5]) {
    int nmatriz[5][5];

    int aux=0;
    for (int i=5; i>0; i--) {
        for (int x = 0; x<5; x++) {
            nmatriz[aux][x] = matriz[x][i-1];
        }
        aux++;
    }

    cout << "Matriz rotada 270: " << endl;
    mostrarmatriz(nmatriz);
}
