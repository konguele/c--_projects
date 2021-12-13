/* La sentencia switch

    switch(expresión){
            case Literal1:
                conjunto de instrucciones;
                break;
            case Literal2:
                conjunto de instrucciones 2;
                break;
            case Literaln:
                conjunto de instrucciones n;
                break;
            default:
                conjunto de instrucciones por defecto;
                break;
    }
*/

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Elige un número del 1 al 5: "; cin>>numero;

    switch(numero){
        case 1: cout<<"Es el número 1"; break;
        case 2: cout<<"Es el número 2"; break;
        case 3: cout<<"Es el número 3"; break;
        case 4: cout<<"Es el número 4"; break;
        case 5: cout<<"Es el número 5"; break;
        default: cout<<"No está en el rango de 1 a 5"; break;
    }

    return 0;
}