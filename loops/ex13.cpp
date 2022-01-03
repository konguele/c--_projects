//Hacer un programa que realice la serie de Fibonacci -> 1,1,2,3,5,8,13...

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n,x=0,y=1,z=1;

    cout<<"Digita el número de elementos: "; cin>>n;

    cout<<"1 ";
    for(int i=1;i<n;i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }

    cout<<"\n";
    cin.get();
    return 0;
}