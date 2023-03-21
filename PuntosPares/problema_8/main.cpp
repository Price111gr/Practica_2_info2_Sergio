#include <stdlib.h>
#include <iostream>

using namespace std;


int main(){

    int cont=0, opc, cont_txt=0, cont_nums=0;
    char arreglo[cont];
    bool d;

    char* letras = new char[cont];

    int* numeros = new int[cont];


    d=true;
    cout<<"hola"<<endl;

    while(d!=false){

        cout<<"hola"<<endl;

        cout<<"Que desea realizar?: "<<endl;
        cout<<"1. Ingresar un caracter"<<endl;
        cout<<"2. terminar para separar."<<endl;
        cin>>opc;

        switch(opc){

        case 1:


            cout<<"Ingrese un caracter: "<<endl;
            cin>>arreglo[cont];

            cout<<"Ingreso el caracter: "<<arreglo[cont]<<endl;
            d=true;
            cont++;

        break;

        case 2:

            for(int i=0; i<=cont; i++){
                cout<<arreglo[i]<<", ";
            }
            cout<<endl;

            d=false;

        break;

        }
    }

    for(int i=0; arreglo[i] !='\0'; i++){
          if(isdigit(arreglo[i])) { // Si es un número
              numeros[cont_nums] = arreglo[i] - '0'; // Convertimos el char a int
              cont_nums++;
          } else { // Si es una letra
              letras[cont_txt] = arreglo[i];
              cont_txt++;
          }
      }


    // Mostramos los números
    cout << "Numeros: ";
    for(int i = 0; i < cont_nums; i++) {
        cout << numeros[i] <<", ";
    }
    cout << endl;

    // Mostramos las letras
    cout << "Letras: ";
    for(int i = 0; i < cont_txt; i++) {
        cout << letras[i]<<", ";
    }
    cout << endl;

    // Liberamos la memoria utilizada por los arreglos dinámicos
    delete[] numeros;
    delete[] letras;

    return 0;

}

