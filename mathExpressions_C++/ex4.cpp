// Escribe la siguiente expresión como expresión C++: a + b/c-d

#include<iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Dime el valor de a: "; cin>>a;
    cout<<"Dime el valor de b: "; cin>>b;
    cout<<"Dime el valor de c: "; cin>>c;
    cout<<"Dime el valor de d: "; cin>>d;

    resultado = a + (b/(c-d));

    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}