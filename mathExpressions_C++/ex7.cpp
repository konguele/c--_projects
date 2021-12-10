/* La calificación final de un estudiante es la media ponderada de tres notas:
 - La nota de prácticas que cuenta un 30% del total
 - La nota teórica que cuenta un 60%
 - La nota de participación que cuenta el 10% restante
 Escriba un programa que lea la entrada standard de las 3 notas y escriba en la 
 salida standard su nota final.*/

 #include<iostream>

 using namespace std;

 int main(){
     float practica,teorica,participacion,nota_final = 0;

     cout<<"Dime la nota de práctica: "; cin>>practica;
     cout<<"Dime la nota teórica: "; cin>>teorica;
     cout<<"Dime la nota de participacion: "; cin>>participacion;

     practica *= 0.30; //así acortamos la operación *= significa practica = practica * ...
     teorica *= 0.60;
     participacion *= 0.10;

    nota_final = practica + teorica + participacion;

    cout<<"\nLa nota final es: "<<nota_final<<endl;

     return 0;
 }