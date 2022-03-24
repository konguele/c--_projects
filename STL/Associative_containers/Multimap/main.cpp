//Contenedor asociativo - Multimap

#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;

int main(){
    multimap<int,string> valores;

    //Insertar valores
    valores.insert(par(12,"Juanjo"));
    valores.insert(par(25,"Mishelle"));
    valores.insert(par(4,"Lucca"));
    valores.insert(par(21,"Marta"));
    valores.insert(par(11,"Xavi"));

    //Mostrar en pantalla el Multimap
    cout<<"\n\n\t-MULTIMAP ORIGINAL-"<<endl;
    multimap<int,string>::iterator i;
    for(i=valores.begin();i!=valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Insertamos pares con claves repetidas 
    valores.insert(par(11,"Isma"));
    valores.insert(par(25,"Emily"));
    valores.insert(par(25,"Al Pacino"));

    //Mostrar en pantalla el Multimap con claves repetidas
    cout<<"\n\n\t-MULTIMAP CLAVES REPETIDAS-"<<endl;
    for(i=valores.begin();i!=valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Conteo de las claves
    int clave = 25;
    cout<<"\nConteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
    for(i=valores.lower_bound(clave);i!=valores.upper_bound(clave);i++){
        cout<<i->second<<" | ";
    }
    cout<<endl;

    return 0;
}