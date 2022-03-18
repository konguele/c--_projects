//Iteradores - Forward Iterators

#include<iostream>
#include<fstream> //Para archivos
#include<iterator> //Para stream_iterators
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    ifstream archivo;

    archivo.open("documento.txt",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    istream_iterator<char> p(archivo); //Iterador para char
    vector<char> frase;

    while(!archivo.eof()){ //Mientras no sea el final del archivo
        frase.push_back(*p); //Almacenamos el caracter por el que vamos
        p++;
    }

    //Mostramos el vector frase
    for(int i=0;i<frase.size();i++){
        cout<<frase[i];
    }
    cout<<endl;

    archivo.close();

    return 0;
}