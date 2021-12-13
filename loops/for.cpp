/*La sentencia for

    for(expr1; expresión lógica; expr2){
        conjunto de instrucciones
    }
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //int i;

    /*for(i=1;i<=10;i++){
        cout<<i<<endl;
    }*/

    for(int i=10;i>=1;i--){ //Nos permite declarar la variable dentro del bucle
        cout<<i<<endl;
    }


    cin.get(); //Si no disponemos de la librería conio.h podemos usar la stdio.h con el cin.get para que no se cierre la pantalla al acabar
    return 0;
}