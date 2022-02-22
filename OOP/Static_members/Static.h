/* La diferencia de un atributo static con un atributo normal es que cuando creas un atributo
static le pertenece a la clase y hace el efecto de una variable global*/

#include<iostream>
using namespace std;

class Estatico{
    private:
        static int contador; //Declaración de un atributo estático. 
    
    public:
        Estatico(){
            contador++;
        }

        int getContador(){
            return contador;
        }
    
    static int sumar(int n1,int n2){ //Definiendo un atributo estático
        int suma = n1+n2;
        return suma;
    }
};