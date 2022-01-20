/* Escribe una plantilla de función llamada maximo() que devuelva el valor máximo de 3 
argumentos que se transmitan a la función cuando sea llamada. Suponga que los 3 argumentos
serán del mismo tipo de datos. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
template <class T>
T maximo(T dato1, T dato2, T dato3);

//Variables globales


//Función principal
int main(){
    int dato1=4, dato2=6, dato3=8;
    float dato4=4.56, dato5=6.67,dato6=3.56;
    char dato7='o',dato8='c',dato9='b';

    cout<<"El máximo valor es(int): "<<maximo(dato1,dato2,dato3)<<endl;
    cout<<"El máximo valor es(float): "<<maximo(dato4,dato5,dato6)<<endl;
    cout<<"El máximo valor es(char): "<<maximo(dato7,dato8,dato9)<<endl;



    cin.get();
    return 0;
}

//Definición de función
template <class T>
T maximo(T dato1, T dato2, T dato3){
    T max;

    if((dato1>=dato2) && (dato1 >= dato3)){
        max = dato1;
    }
    else{
        if((dato2>=dato1) && (dato2>=dato3)){
            max = dato2;
        }
        else{
            max = dato3;
        }
    }
    return max;
}