/*Define una plantilla para la clase Array, la cuál podrá definir valores de distinto tipo,
el cuál se definirá en el momento de la instancia, el programa deberá tener un menú con las 
siguientes opciones:

    1. Agregar un nuevo elemento en el Array
    2. Comprobar el espacio del Array
    3. Ver Array
    4. Vaciar Array
    5. Salir
*/

#include<iostream>
#include "Array.h"

using namespace std;

void opciones(){
    cout<<"\n\t-MENU-"<<endl;
    cout<<"1. Agregar un nuevo elemento al array"<<endl;
    cout<<"2. Comprobar el espacio en el array"<<endl;
    cout<<"3. Ver array"<<endl;
    cout<<"4. Vaciar el array"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Digita una opción del menú: ";
}

int main(int argc,char** argv){
    Array <int> array1(5);
    int opcion;
    int elemento;

    do{
        opciones();
        cin>>opcion;

        switch(opcion){
            case 1: if(array1.arrayLleno()){
                        cout<<"El array está lleno y no puede agregar más elementos"<<endl;
                    }
                    else{
                        cout<<"\nDigita un elemento a agregar: ";
                        cin>>elemento;
                        array1.agregar(elemento);
                    }
                    break;
            case 2: if(array1.arrayLleno()){
                        cout<<"\nEl array está lleno"<<endl;
                    }
                    else{
                        cout<<"El array todavía no está lleno"<<endl;
                    }
                    break;
            case 3: cout<<"\n\t-ELEMENTOS DEL ARRAY-"<<endl;
                    array1.mostrarArray();
                    break;
            case 4: cout<<"Vaciando el array"<<endl;
                    array1.vaciarArray();
                    break;
            case 5: break;
            default: cout<<"No me engañes, perro! Esa no es una opción válida"<<endl;
        }
        cout<<endl;
    }while(opcion != 5);


    return 0;
}