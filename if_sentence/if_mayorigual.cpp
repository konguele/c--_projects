/* La sentencia if

    if(condición){
        instrucciones 1;
    }
        else{
            Instrucciones 2;
        }
*/

#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;

    cout<<"Dime un número: "; cin>>numero;

    if(numero >= dato){
        cout<<"El número es mayor o igual a 5";
    }
    else{
        cout<<"El número es menor a 5";
    }


    return 0;
}