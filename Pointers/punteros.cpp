/* Punteros - Declaración de punteros

&n = La dirección de n
*n = La variable cuya dirección está almacenada en n

*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int num,*dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Número: "<<num<<endl; //Muestra el contenido de la variable
    cout<<"Número: "<<*dir_num<<endl; //Muestra lo que encuentra en la dirección de memoria que le hemos dado
    cout<<"Dirección de memoria: "<<&num<<endl; //Muestra la dirección de memoria de la variable num
    cout<<"Dirección de memoria: "<<dir_num<<endl; //Al quitar el asterisco muestra la dirección de memoria en lugar del contenido de la variable num


    cin.get();
    return 0;
}

//Definición de función