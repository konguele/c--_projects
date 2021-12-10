/* Escribe un programa que lea de la entrada standard dos números y
muestre en la salida standard su suma, resta, multiplicación y división
*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Elige un número: "; cin>>n1;
    cout<<"Elige otro número: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"\nLa resta es: "<<resta<<endl;
    cout<<"\nLa multiplicación es: "<<multiplicacion<<endl;
    cout<<"\nLa división es: "<<division<<endl;

    return 0;
}

