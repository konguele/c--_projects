/*Método por Shell --> Se divide la lista en n/2, se clasifican por separado y se ordenan las parejas
después se divide n/4 y se vuelven a clasificar. Se sigue dividiendo la lista hasta acabar
comparando de 2 en 2 y acaba cuando el salto sea 1.
*/


#include<iostream>
#include<stdio.h>

using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux=x;
    x=y;
    y=aux;
}

void ordenacionShell(float a[],int n){
    int salto,i,j,k;
    salto = n/2;

    while(salto>0){
        for(i=salto;i<n;i++){
            j = i - salto;
            while(j>=0){
                k = j + salto;
                if(a[j] <= a[k]){ //Par de elementos están ordenados
                    j = -1;
                }
                else{ //Par de elementos desordenados
                    intercambio(a[j],a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto/2;
    }
}

int main(){
    float arreglo[] = {4,6,1,9,5,10,2,11,19,7};
    ordenacionShell(arreglo,10);

    cout<<"Arreglo ordenado - Forma ascendente"<<endl;
    for(int i=0;i<10;i++){
        cout<<arreglo[i]<<"|";
    }

    cout<<"\nArreglo ordenado - Forma descendente"<<endl;
    for(int i=9;i>=0;i--){
        cout<<arreglo[i]<<"|";
    }
    cout<<endl;

    cin.get();
    return 0;
}