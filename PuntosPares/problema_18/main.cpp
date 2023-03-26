#include <iostream>

using namespace std;

int factorial(int);
void nPermutacion(int);

int main() {
    int n;
    cout << "Ingrese el enesimo termino: ";
    cin >> n;

    nPermutacion(n);

    return 0;
}


// Función para calcular el factorial de un número
int factorial(int n){

    int fact=1;
    for (int i=1; i<=n; i++){
        fact*=i;
    }

    return fact;
}

void nPermutacion(int n){
    // Generar un arreglo de números del 0 al 9
    int semilla=n;
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Calcular la permutación lexicográfica correspondiente
    for (int i=0; i<10; i++){
        int f=factorial(9-i);
        int j=i+n/f;
        n%=f;
        while (j>i){
            int temp=nums[j];
            nums[j]=nums[j-1];
            nums[j-1]=temp;
            j--;
        }
        if (n == 0) {
            break;
        }
    }

    cout << "La permutacion numero: "<<semilla<<" es: ";
    for (int i=0; i<10; i++) {
        cout << nums[i];
    }
    cout << endl;
}
