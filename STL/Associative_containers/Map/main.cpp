//Contenedor asociativo - Map

#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;

int main(){
    map<int,string> valores; //Creamos un mapa <clave,valor>

    //Insertar elementos en el Map
    valores.insert(par(12,"Juanjo"));
    valores.insert(par(25,"Mishelle"));
    valores.insert(par(4,"Lucca"));
    valores.insert(par(21,"Marta"));
    valores.insert(par(11,"Xavi"));

    //Mostrar Map en pantalla
    cout<<"\n\n\t-MAP ORIGINAL-"<<endl;
    map<int,string>::iterator i;
    for(i=valores.begin();i != valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Insertar claves duplicadas
    valores.insert(par(11,"Isma"));

    cout<<"Añadimos duplicada la clave 11, con el nombre Isma. ¿Funcionará?"<<endl;

    //Mostrar Map en pantalla con los duplicados (Si los acepta)
    cout<<"\n\n\t-MAP NO ACEPTA DUPLICADOS-"<<endl;
    for(i=valores.begin();i != valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Modificar un valor de una clave existente
    valores[11] = "Isma";
    valores[22] = "Sergi"; //Así también se puede añadir, pero se usa más para modificar valores.

    cout<<"Para cambiar el valor de la clave 11, debemos ponerlo así: valores[11] = Isma; AHORA FUNCIONA!!"<<endl;

    //Mostrar Map en pantalla con los duplicados (Si los acepta)
    cout<<"\n\n\t-MAP CON CAMBIOS CORRECTOS-"<<endl;
    for(i=valores.begin();i != valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Buscar un elemento en el Map
    i = valores.find(12);

    //Mostramos el valor de la clave buscada
    if(i != valores.end()){
        cout<<"Valor encontrado "<<i->second<<endl;
    }
    else{
        cout<<"Valor no encontrado"<<endl;
    }

    //Eliminar un elemento del Map
    valores.erase(11);

    //Mostrar Map en pantalla con la clave eliminada
    cout<<"\n\n\t-MAP CLAVE ELIMINADA-"<<endl;
    for(i=valores.begin();i != valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;


    return 0;
}