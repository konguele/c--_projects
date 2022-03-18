//Contenedor Lineal - Vector

#include<iostream>
#include<vector>

using namespace std;

int main(){
    //vector<int> numeros; //Array de enteros, usando push_back para agregar los elementos
    vector<int> numeros(5); //Si le digo los elementos, no puedo usar push_back

    /*numeros.push_back(5); //Agrega elementos al final del array con push_back
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);*/

    numeros[0] = 5;
    numeros[1] = 10;
    numeros[2] = 1;
    numeros[3] = 15;
    numeros[4] = 20;

    //Mostrar los elementos del array
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<"|";
    }

    numeros.pop_back(); //Elimina el último elemento del array

    cout<<endl;
    //Mostrar los elementos del array
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<"|";
    }

    numeros.erase(numeros.begin()+1,numeros.begin()+3); //Así eliminamos las posiciones que queremos

    cout<<endl;
    //Mostrar los elementos del array
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<"|";
    }

    numeros[1] = 7; //Modificamos un valor del array

    cout<<endl;
    //Mostrar los elementos del array
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<"|";
    }

    return 0;
}