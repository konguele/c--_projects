#include<iostream>
#include "Intercambiar.h"
using namespace std;

template <typename T> //Se usa typename porque es una plantilla de función
void ordenarAscendente(T *array,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(array[j] > array[j+1]){
                intercambiar(array[j],array[j+1]);
            }
        }
    }
}

template <typename T>
void ordenarDescendente(T *array,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(array[j] < array[j+1]){
                intercambiar(array[j],array[j+1]);
            }
        }
    }
}