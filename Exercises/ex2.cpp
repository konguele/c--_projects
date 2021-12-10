/* Escribir un programa que de la entrada standard lea el precio de un
producto y muestre en la salida standard el precio del producto con IVA */

#include<iostream>

using namespace std;

int main(){
    float precio,iva,precioFinal;

    cout<<"Dime el precio de un producto: ";
    cin>>precio;

    iva = precio*0.21;
    precioFinal = precio+iva;

    cout<<"\nEl precio final es: "<<precioFinal<<endl;
    

    return 0;
}