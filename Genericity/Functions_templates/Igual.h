//Lo mismo que el resto, pero desde un header file

#include<iostream>
using namespace std;

template <typename T,typename T2> 
T igual(T dato1,T2 dato2){
    if(dato1 == dato2){
        return 0;
    }
    else{
        return 1;
    }
}