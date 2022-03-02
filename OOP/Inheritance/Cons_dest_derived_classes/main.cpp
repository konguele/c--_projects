//Constructores y destructores de clases derivadas

#include<iostream>
#include "ClaseHija.h"
using namespace std;

int main(int argc,char** argv){
    ClaseHija* ob1 = new ClaseHija(5,10);

    cout<<endl;

    delete ob1;
    return 0;
}