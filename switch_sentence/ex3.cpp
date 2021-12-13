/*Escribe un programa que lea de la entrada standard 3 números. Después debe leer un cuarto número
e indicar si el número coincide con alguno de los introducidos anteriormente*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3,n4;

    cout<<"Elige 3 número: "; cin>>n1>>n2>>n3;

    cout<<"\nElige un último número: "; cin>>n4;

    //El símbolo || significa o
    if((n1==n4) || (n2==n4) || (n3==n4)){
        cout<<"\nEl número coincide al menos con uno de los 3 números anteriores"<<endl;
    }
    else{
        cout<<"\nEl cuarto número no coincide con los anteriores"<<endl;
    }

    return 0;
}