#include<iostream>
using namespace std;

template <class T>
class Array{
    private:
        T* array;
        int indice;
        int nElementos;

    public:
        Array(int n){
            array = new T[n];
            indice = 0;
            nElementos = n;
        }

        ~Array(){
            delete[] array;
        }

        void agregar(T elemento){
            array[indice++] = elemento;
        }

        bool arrayLleno(){
            if(indice >= nElementos){
                return true;
            }
            else{
                return false;
            }
        }

        void mostrarArray(){
            for(int i=0;i<indice;i++){
                cout<<"Elemento ["<<i<<"]: "<<array[i]<<endl;
            }
        }

        void vaciarArray(){
            for(int i=0;i<indice;i++){
                array[i] = 0;
            }
            indice = 0;
        }
};