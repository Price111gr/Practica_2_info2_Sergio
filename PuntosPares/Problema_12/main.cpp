#include <iostream>

using namespace std;

int main()
{
    int tam_matriz, sumfilA = 0, numeroComprobante = 0, sumC = 0, numero =0;

    cout<< "Ingresa la dimension del cuadrado(es nxn): ";
    cin>> tam_matriz;

    // Crea la matriz
    int matriz[tam_matriz][tam_matriz];
    int comprobante[(tam_matriz*tam_matriz)];

        for(int i=0;i<tam_matriz;i++){

            for (int j = 0;j <tam_matriz;j++){

                cout << "Ingrese el numero de la posicion " << (i+1) << "," <<(j +1)<< ": ";
                cin >>  numero;
                matriz[i][j] = numero;

            }

        }

        //Imprime la matriz
        for(int i=0;i<tam_matriz;i++){

            for (int j = 0;j <tam_matriz;j++){


                cout << matriz[i][j]<< " ";


            }

            cout << endl;

        }

        //Suma las filas
        for(int i=0;i<tam_matriz;i++){

            sumfilA=0;

            for (int j = 0;j <tam_matriz;j++){
                sumfilA += matriz[i][j];


            }

            comprobante[numeroComprobante] = sumfilA;
            cout<<comprobante[numeroComprobante]<<endl;
            numeroComprobante++;
        }

        // Suma columnas
        for(int j=0;j<tam_matriz;j++){

            sumC=0;

            for (int i = 0;i <tam_matriz;i++){
                sumC += matriz[i][j];

            }

            comprobante[numeroComprobante] = sumC;
            cout<<comprobante[numeroComprobante]<<endl;
            numeroComprobante++;
        }
int  contenedor = 0;
for (int i = 0;i<numeroComprobante-1;i++){
    contenedor = comprobante[i];

    if(contenedor==comprobante[i+1]){

        cout << "todo bien todo bonito, solo nacional"<< endl;
    }else{
        cout << "no tienes un cudrado magico, sos del DIM"<< endl;
        break;
    }
}

    return 0;
}
