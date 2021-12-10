// Escribe la siguiente expresión como expresión C++: a+b/c / d+e/f

#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f, resultado = 0;

    cout<<"Dime el valor de a: "; cin>>a;
    cout<<"Dime el valor de b: "; cin>>b;
    cout<<"Dime el valor de c: "; cin>>c;
    cout<<"Dime el valor de d: "; cin>>d;
    cout<<"Dime el valor de e: "; cin>>e;
    cout<<"Dime el valor de f: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout<<"\nEl resultado es: "<<resultado<<endl;


    return 0;
}