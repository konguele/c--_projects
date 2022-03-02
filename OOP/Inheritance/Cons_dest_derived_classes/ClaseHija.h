#include<iostream>
#include "ClaseBase.h"
using namespace std;

class ClaseHija : public ClaseBase{
    private:
        int numero2;
    
    public:
        ClaseHija(int numero,int numero2) : ClaseBase(numero){
            this->numero2 = numero2;
            cout<<"Constructor de la clase Derivada"<<endl;
      }
    
    ~ClaseHija(){
        cout<<"Destructor de la clase Derivada"<<endl;
    }
};