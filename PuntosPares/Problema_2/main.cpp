#include <iostream>

using namespace std;

int main()

{
    int n=200, sum=0;

    char*letras= new char[26];
    for(int i=0;i<=26;i++){
        letras[i] = 65+i;
    }

    char*arreglo= new char[n];
    for (int i=0;i<n;i++){
        arreglo[i]=rand() % 26 + 65;


    }

    for(int i=0; i<n; i++) {
      cout << arreglo[i];
   }

   cout <<endl;

   for(int i=0; i<26; i++){
       for(int j=0;j<n;j++){
           if(letras[i]==arreglo[j]){
               sum++;
           }

       }

       cout<<letras[i]<<": "<<sum<<endl;
       sum=0;
   }

   delete[] arreglo; // Liberar la memoria asignada al arreglo
   delete[] letras;


}
