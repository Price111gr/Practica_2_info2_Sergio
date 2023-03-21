#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int num=0, cont=0, aux=1, otro=0, almacen=0;
    char s[9];
    bool t;

    cout<<"de cuantas cifras ingresaras tu numero? (de 1 a 9): ";

    cin>>cont;

    if(cont==0 || cont>9){
        t=false;

        while(t!=true){
            cout<<"No puedes ingresar un numero de 0 cifras o mayor a 9"<<endl;
            cout<<"reingresa el numero: ";
            cin>>cont;

            if(cont==0 || cont>9){
                t=false;
            }
            else{
                t=true;
            }
        }

    }

    cout<<"Ingrese numero el numero de "<<cont<<" cifras: ";
    cin>>s;

    cout<<s;

    cout<<"Caracter: "<<s<<endl;

    for(int i=1; i<cont; i++){
        otro=pow(10,cont);
        num=(s[i]+48)*otro;
        almacen=num;
        cont--;
    }
    cout<<almacen;


    return 0;
}



