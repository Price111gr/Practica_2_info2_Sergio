#include <iostream>

using namespace std;

int main()
{
    int tam, F=1, Z=1;

    cout<<"ingrese dimencion de la matriz: ";
    cin>>tam;

    for (int i=tam; i>1; i--){
        Z=Z*i;
        cout<<Z<<endl;
    }

    cout<<"Cambio!"<<endl;

    for (int i=tam+tam; i>1; i--){
        F=F*i;
        cout<<F<<endl;
    }

    F=F/(Z*Z);
    cout<<"Para una malla de: "<<tam<<"x"<<tam<<" Hay "<<F<<" Caminos"<<endl;

    return 0;
}
