/* Realiza un programa que calcule el valor que toma la siguiente función para unos valores dados
de x e y.  f(x,y) = raiz cuadrada de x / y al cuadrado - 1
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x,y,resultado = 0;

    cout<<"Escribe el valor de x: "; cin>>x;
    cout<<"Escribe el valor de y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout<<"\nEl resultado es: "<<resultado<<endl;



    return 0;
}