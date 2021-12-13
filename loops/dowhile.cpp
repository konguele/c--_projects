/*La sentencia do while

    do{
        conjunto de instrucciones;
    }while(Expresión lógica);
    */

   #include<iostream>
   #include<stdlib.h>

   using namespace std;

   int main(){
       int i;

       /*i = 1;

       do{
           cout<<i<<endl;
           i++; //Aumenta el iterador de uno en uno.

       }while(i<=10);*/
       
       i = 10;

       do{
           cout<<i<<endl;
           i--; //decrementa el iterador de uno en uno.

       }while(i>=1);

       system("pause");
       return 0;
   }