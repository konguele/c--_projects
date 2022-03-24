//Algoritmos STL - Transformación

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

//Función para pasar las letras a mayúsculas
void mayusculas(char &letras){
    if(letras>='a' && letras<='z'){
        letras = letras - ('a' - 'A');
    }
}

//Función unaria para determinar si una letra es una vocal
char vocales(char letra){
    return (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? letra : '-';
}

int main(){
    vector<char> letras;

    //Generamos letras para el vector
    cout<<"\n\t-VECTOR ORIGINAL-"<<endl;
    for(int i=0;i<10;i++){
        letras.push_back('a' + i);
    }

    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    //Desordenamos el vector letras
    random_shuffle(letras.begin(),letras.end());

    cout<<"\n\t-VECTOR DESORDENADO-"<<endl;
    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    //Función de transformación a mayúsculas
    for_each(letras.begin(),letras.end(),mayusculas);

    cout<<"\n\t-VECTOR MAYÚSCULAS-"<<endl;
    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    //Imprimir solo las vocales
    cout<<"\n\t-VECTOR SOLO VOCALES-"<<endl;
    transform(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"), vocales);
    cout<<endl;

    return 0;
}