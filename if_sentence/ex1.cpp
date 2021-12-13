// Escribe un programa para que lea 2 números y determina cuál es el mayor

#include<iostream>

using namespace std;

int main(){
    int n1,n2;

    //Forma larga de hacerlo:
    /*cout<<"Dime 1 número: "; cin>>n1;
    cout<<"Dime 1 número: "; cin>>n2;*/

    //Forma corta de hacerlo:
    cout<<"Elige 2 números para ver cuál es mayor: ";
    cin>>n1>>n2;

    if(n1==n2){
        cout<<"Ambos números son iguales"<<endl;
    }
    else if(n1>n2){
        cout<<"El número mayor es: "<<n1<<endl;
    }
    else{
        cout<<"El número mayor es: "<<n2<<endl;
    }

    return 0;
}