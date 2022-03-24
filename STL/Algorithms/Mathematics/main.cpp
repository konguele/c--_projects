//Algoritmos STL - Matemáticos

#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric> //Para utilizar su función accumulate (También forma parte de la STL)
using namespace std;

//Función lógica para comprobar si un número es positivo
template<class T>
bool esPositivo(T valor){
    return (valor >= 0);
}


int main(){
    vector<float> numeros;

    //Abrimos el archivo en modo lectura
    ifstream archivo("archivoNumerico.txt",ios::in);

    //Copiamos todos los elementos del archivo hacia el vector números
    copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros)); //Back_inserter es un contenedor y funciona como un iterador

    //Calculamos el máximo y mínimo de los elementos del vector
    cout<<"Máximo: "<<*max_element(numeros.begin(),numeros.end())<<endl;
    cout<<"Mínimo: "<<*min_element(numeros.begin(),numeros.end())<<endl;

    //Calculamos el valor promedio de los elementos del vector
    cout<<"\nValor promedio: "<<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;

    //Calcular el conteo de los números positivos
    cout<<"Cantidad de números positivos: "<<count_if(numeros.begin(),numeros.end(),esPositivo<float>)<<endl;

    return 0;
}